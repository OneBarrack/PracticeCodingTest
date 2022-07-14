#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze2 - Resistance

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
yellow
violet
red
���� ��� 1 
4700
���� �Է� 2 
orange
red
blue
���� ��� 2 
32000000
���� �Է� 3 
white
white
white
���� ��� 3 
99000000000


��	��	��
black	0	1
brown	1	10
red	    2	100
orange	3	1,000
yellow	4	10,000
green	5	100,000
blue	6	1,000,000
violet	7	10,000,000
grey	8	100,000,000
white	9	1,000,000,000
*/

int main()
{
    unordered_map<string, pair<int, int>> resistances;
    resistances["black"]  = make_pair(0, 1);
    resistances["brown"]  = make_pair(1, 10);
    resistances["red"]    = make_pair(2, 100);
    resistances["orange"] = make_pair(3, 1000);
    resistances["yellow"] = make_pair(4, 10000);
    resistances["green"]  = make_pair(5, 100000);
    resistances["blue"]   = make_pair(6, 1000000);
    resistances["violet"] = make_pair(7, 10000000);
    resistances["grey"]   = make_pair(8, 100000000);
    resistances["white"]  = make_pair(9, 1000000000);

    string color1, color2, color3;
    cin >> color1 >> color2 >> color3;
    cout << resistances[color1].first << resistances[color2].first << to_string(resistances[color3].second).substr(1);

    return 0;
}