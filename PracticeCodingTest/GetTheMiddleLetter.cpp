#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// Lv1. ��� ���� ��������

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <numeric>

using namespace std;

string solution(string s)
{
    return (s.size() % 2 == 1) ? s.substr(s.size() / 2, 1) : s.substr(s.size() / 2 - 1, 2);
}

int main()
{
    string s = "abcde";
    cout << solution(s) << endl;

    return 0;
}