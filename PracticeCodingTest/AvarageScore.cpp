#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze4 - 10039. Avarage Score

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
10
65
100
30
95
���� ��� 1
68
*/

int main()
{
    vector<int> score(5);
    for ( int i = 0; i < 5; ++i )
    {
        cin >> score[i];
        if ( score[i] < 40 )
            score[i] = 40;
    }

    cout << accumulate(score.begin(), score.end(), 0) / 5;

    return 0;
}