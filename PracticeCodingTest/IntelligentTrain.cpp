#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze3 - 2455. Intelligent Train

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
0 32
3 13
28 25
39 0
���� ��� 1
42
*/

int main()
{
    int maxPeopleCountInTrain = 0;
    int curPeopleCountInTrain = 0;

    for ( int i = 0; i < 4; ++i )
    {
        int outCount, inCount;
        cin >> outCount >> inCount;

        curPeopleCountInTrain -= outCount;
        curPeopleCountInTrain += inCount;

        maxPeopleCountInTrain = max(maxPeopleCountInTrain, curPeopleCountInTrain);
    }

    cout << maxPeopleCountInTrain;

    return 0;
}