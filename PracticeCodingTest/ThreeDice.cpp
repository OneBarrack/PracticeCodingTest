#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze4 - 2480. Three Dice

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
3 3 6
���� ��� 1
1300
���� �Է� 2
2 2 2
���� ��� 2
12000
���� �Է� 3
6 2 5
���� ��� 3
600
*/

int main()
{
    int price = 0;

    vector<int> dices(3);
    cin >> dices[0] >> dices[1] >> dices[2];

    if ( dices[0] == dices[1] && dices[0] == dices[2] )
    {
        price = 10000 + (dices[0] * 1000);
    }
    else if ( dices[0] == dices[1] || dices[0] == dices[2] )
    {
        price = 1000 + (dices[0] * 100);
    }
    else if ( dices[1] == dices[2] )
    {
        price = 1000 + (dices[1] * 100);
    }
    else
    {
        price = *max_element(dices.begin(), dices.end()) * 100;
    }

    cout << price;

    return 0;
}