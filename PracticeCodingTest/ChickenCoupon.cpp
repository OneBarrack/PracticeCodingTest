#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv.Bronze2 - 1673. Chicken Coupon

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
4 3
10 3
100 5
���� ��� 1
5
14
124
*/

int main()
{
    int couponCount, needStampCount;
    while ( cin >> couponCount >> needStampCount )
    {
        int answer = couponCount;
        int stampCount = couponCount;
        while ( stampCount >= needStampCount )
        {
            couponCount = stampCount / needStampCount;
            stampCount = stampCount % needStampCount;

            answer += couponCount;
            stampCount += couponCount;
        }

        cout << answer << '\n';
    }

    return 0;
}