#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv1 ����� ������ ����

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

int solution(int left, int right)
{
    int answer = 0;

    for ( int num = left; num <= right; ++num )
    {
        int divisorCount = (num == 1) ? 1 : 2; // 1�� �ڽ�
        for ( int i = 2; i * i <= num; ++i )
        {
            if ( i * i == num )
            {
                ++divisorCount;
            }
            else if ( num % i == 0 )
            {
                divisorCount += 2;
            }
        }

        if ( divisorCount % 2 == 0 )
        {
            answer += num;
        }
        else
        {
            answer -= num;
        }
    }

    return answer;
}

int main()
{	
	cout << solution(13, 17) << endl;

	return 0;
}