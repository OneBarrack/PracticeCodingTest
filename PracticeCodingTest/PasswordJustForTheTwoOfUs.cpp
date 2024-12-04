#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// ��������. �츮 �Ѹ��� ��ȣ

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

string solution(string s, string skip, int index) {
    string answer = "";

    set<char> skips;
    for (char c : skip)
    {
        skips.insert(c);
    }

    for (char c1 : s)
    {
        char target = c1;

        for (int i = 0; i < index; i++)
        {
            target = (char)(target + 1);

            if (target > 'z')
                target = 'a';

            if (skips.find(target) != skips.end())
            {
                --i;
                continue;
            }
        }

        answer += target;
    }

    return answer;
}

int main()
{
    string s = "aukks";
    string skip = "wbqd";
    int index = 5;

    cout << solution(s, skip, index) << endl;

    return 0;
}
