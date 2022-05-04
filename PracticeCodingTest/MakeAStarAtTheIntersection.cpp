#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv2. ������ �� �����

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <numeric>
#include <cmath>
#include <cfloat>

using namespace std;

vector<string> solution(vector<vector<int>> line)
{
    vector<string> answer;
    vector<long long> xList;
    vector<long long> yList;

    for ( int i = 0; i < line.size(); ++i )
    {
        // Ax + By + E
        long long A = static_cast<long long>(line[i][0]);
        long long B = static_cast<long long>(line[i][1]);
        long long E = static_cast<long long>(line[i][2]);

        for ( int j = 0; j < i; ++j )
        {
            // Cx + Dy + F
            long long C = static_cast<long long>(line[j][0]);
            long long D = static_cast<long long>(line[j][1]);
            long long F = static_cast<long long>(line[j][2]);

            // AD - BC = 0�� ��� �� ������ ���� �Ǵ� ��ġ
            long long divisor = (A * D - B * C);
            if ( divisor == 0 )
                continue;

            // x = (BF - ED) / (AD - BC), y = (EC - AF) / (AD - BC) ���� ���� ����
            double dX = (B * F - E * D) / static_cast<double>(divisor);
            double dY = (E * C - A * F) / static_cast<double>(divisor);
            long long x = static_cast<long long>(round(dX));
            long long y = static_cast<long long>(round(dY));

            // x, y ��� ������ ��� ��ǥ ����
            if ( fabs(dX - x) <= DBL_EPSILON && fabs(dY - y) <= DBL_EPSILON )
            {
                xList.push_back(x);
                yList.push_back(y);
            }
        }
    }

    // �� ���� �ּ�,�ִ� ���� �̿��Ͽ� ��� ���� ������ �� �ִ� �ּ����� row, col ����
    long long minX = *min_element(xList.begin(), xList.end());
    long long maxX = *max_element(xList.begin(), xList.end());
    long long minY = *min_element(yList.begin(), yList.end());
    long long maxY = *max_element(yList.begin(), yList.end());
    int row = maxY - minY + 1;
    int col = maxX - minX + 1;

    // ������ �ʱ⼳�� �� ��� ���Ŀ� ���߾� ��ǥ ����
    answer.resize(row, string(col, '.'));
    for ( int i = 0; i < xList.size(); ++i )
        answer[row - (yList[i] - minY) - 1][xList[i] - minX] = '*';

    return answer;
}

int main()
{
    vector<vector<int>> line = { { 0, 1, -1}, {1, 0, -1}, {1, 0, 1} };    
    vector<string> result = solution(line);

    for ( string res : result )
        cout << res << endl;

    return 0;
}