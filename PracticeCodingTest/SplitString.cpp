//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// ��������. ���ڿ� ������
//
//#include <string>
//#include <vector>
//#include <queue>
//#include <set>
//#include <algorithm>
//#include <unordered_map>
//#include <numeric>
//#include <stack>
//#include <map>
//
//using namespace std;
//
//int solution(string s) {
//    if (s.length() == 1)
//        return 1;
//
//    int answer = 0;
//
//    char target = '-';
//    int targetCount = 1;
//    for (char& c : s)
//    {
//        if (target == '-')
//        {
//            target = c;
//            targetCount = 1;
//            continue;
//        }
//
//        targetCount = (target == c) ? targetCount + 1 : targetCount - 1;
//        if (targetCount == 0)
//        {
//            ++answer;
//            target = '-';
//        }
//    }
//
//    return (targetCount > 0) ? answer + 1 : answer;
//}
//
//int main()
//{
//    string s = "banana";
//    cout << solution(s) << endl;
//
//    return 0;
//}
