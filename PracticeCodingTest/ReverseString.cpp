#include <iostream>
// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
// ���ڿ� ������

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

string solution(string my_string, int s, int e) {
    string subStr = my_string.substr(s, e - s + 1);
    reverse(subStr.begin(), subStr.end());

    my_string.replace(s, subStr.length(), subStr);

    return my_string;
}

int main(void) {
    string my_string = "jwhwang";
    int s = 2;
    int e = 4;

    cout << solution(my_string, s, e) << endl;

    return 0;
}