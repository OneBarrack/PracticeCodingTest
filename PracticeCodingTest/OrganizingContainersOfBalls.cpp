#include <iostream>
// ��Ŀ��ũ �ڵ��׽�Ʈ ���� 
// Lv Medium. �� �����̳� ����

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <numeric>

using namespace std;

string organizingContainers(vector<vector<int>> container)
{
    int n = container.size();
    vector<long long> ballCountsForContainer(n);
    vector<long long> ballCountsForType(n);

    for ( int i = 0; i < n; ++i )
    {
        for ( int j = 0; j < n; ++j )
        {
            ballCountsForContainer[i] += container[i][j];
            ballCountsForType[j] += container[i][j];
        }
    }

    sort(ballCountsForContainer.begin(), ballCountsForContainer.end());
    sort(ballCountsForType.begin(), ballCountsForType.end());

    for ( int i = 0; i < n; ++i )
        if ( ballCountsForContainer[i] != ballCountsForType[i] )
            return "Impossible";

    return "Possible";
}


int main()
{
    vector<vector<int>> container = {
        {0, 2, 1},
        {1, 1, 1},
        {2, 0, 0}
    };

    cout << organizingContainers(container) << endl;

    return 0;
}