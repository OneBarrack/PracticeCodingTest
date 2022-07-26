#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze1 - 1110. Plus Cycle

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
26
���� ��� 1
4
���� �Է� 2
55
���� ��� 2
3
���� �Է� 3
1
���� ��� 3
60
���� �Է� 4
0
���� ��� 4
1
���� �Է� 5
71
���� ��� 5
12
*/

int main()
{
    int inputNum;
    cin >> inputNum;

    int cycleLength = 0;
    int oldNum = inputNum;
    int newNum = -1;
    
    while ( inputNum != newNum )
    {
        int leftOldNum = oldNum / 10;
        int rightOldNum = oldNum % 10;
        newNum = (rightOldNum * 10) + ((leftOldNum + rightOldNum) % 10);
        oldNum = newNum;
        ++cycleLength;
    }

    cout << cycleLength;

    return 0;
}