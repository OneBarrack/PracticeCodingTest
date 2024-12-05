#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// ��������. �ݶ� ����

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

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a)
    {
        int reward = n / a * b;
        answer += reward;

        n = reward + (n % a);
    }

    return answer;
}

int main()
{
    int a = 2;
    int b = 1;
    int n = 20;

    cout << solution(a, b, n) << endl;

    return 0;
}
