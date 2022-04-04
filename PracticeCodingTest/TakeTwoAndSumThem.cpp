#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.1 - �� �� �̾Ƽ� ���ϱ�

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <sstream>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    set<int> sumSet;
    for ( int i = 0, j = i + 1; i < numbers.size() - 1; ++i )
    {
        for ( int j = i + 1; j < numbers.size(); ++j )
        {
            sumSet.insert(numbers[i] + numbers[j]);
        }
    }

    return vector<int>(sumSet.begin(), sumSet.end());
}

int main()
{
    vector<int> numbers = { 2, 1, 3, 4, 1 };
    vector<int> result = solution(numbers);

    for ( int res : result )
        cout << res << endl;

    return 0;
}