#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze4 - Test Score

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
* ���� �Է� 1 
100 80 70 60
80 70 80 90
���� ��� 1 
320
���� �Է� 2 
100 80 70 60
80 70 60 100
���� ��� 2 
310
*/

int main()
{
    int minkookScore = 0;
    int mansaeScore = 0;

    for ( int i = 0; i < 4; ++i )
    {
        int score;
        cin >> score;
        minkookScore += score;
    }
    for ( int i = 0; i < 4; ++i )
    {
        int score;
        cin >> score;
        mansaeScore += score;
    }

    if ( minkookScore >= mansaeScore )
        cout << minkookScore;
    else
        cout << mansaeScore;

    return 0;
}