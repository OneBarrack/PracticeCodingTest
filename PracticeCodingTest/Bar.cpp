#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Silver5 - Bar

#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>

using namespace std;

/*
���� �Է� 1
23
���� ��� 1
4
���� �Է� 2
32
���� ��� 2
1
���� �Է� 3
64
���� ��� 3
1
���� �Է� 4
48
���� ��� 4
2
*/

int main()
{   
    int X;
    cin >> X;
    
    priority_queue<int, vector<int>, greater<int>> bars;
    int totalLength = 64;
    bars.push(totalLength);

    while ( totalLength != X )
    {
        int minLength = bars.top() / 2;
        bars.pop();

        bars.push(minLength);
        if ( totalLength - minLength < X )
            bars.push(minLength);
        else
            totalLength -= minLength;
    }

    cout << bars.size();

    return 0;
}