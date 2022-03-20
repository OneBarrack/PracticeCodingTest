#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv2 2�� ���Ϸ� �ٸ� ��Ʈ

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

using namespace std;

vector<long long> solution(vector<long long> numbers)
{
    vector<long long> answer;
    queue<int> bitQueue;

    for ( long long num : numbers )
    {
        long long result = 0;

        if ( num % 2 == 0 )
        {
            result = num + 1;
        }
        else
        {
            int order = 1;
            int zeroPosOrder = 0;
            while ( true )
            {
                int remainder = num % 2;
                if ( remainder == 0 && zeroPosOrder == 0 )
                {
                    zeroPosOrder = order;
                }
                bitQueue.push(remainder);

                if ( num == 0 )
                    break;

                num /= 2;
                ++order;
            }

            order = 1;
            long long square = 1;
            while ( !bitQueue.empty() )
            {
                int n = bitQueue.front();
                bitQueue.pop();

                if ( order == zeroPosOrder - 1 || order == zeroPosOrder )
                {
                    n ^= 1;
                }

                result += n * square;
                square *= 2;
                ++order;
            }
        }

        answer.emplace_back(result);
    }

    return answer;
}

int main()
{
    vector<long long> numbers = { 2, 7 };
    vector<long long> result = solution(numbers);

    for ( long long res : result )
	    cout << res << endl;

	return 0;
}