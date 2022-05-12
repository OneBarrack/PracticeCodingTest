#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv2. �ִ񰪰� �ּڰ�

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

string solution(string s)
{
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    stringstream ss(s);
    while ( getline(ss, s, ' ') )
    {
        minNum = min(minNum, stoi(s));
        maxNum = max(maxNum, stoi(s));
    }
    return to_string(minNum) + " " + to_string(maxNum);
}

int main()
{
    string s = "-1 -2 -3 -4";
    cout << solution(s) << endl;

    return 0;
}