//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv1. ũ�Ⱑ ���� �κй��ڿ�
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
//int solution(string t, string p) {
//    int answer = 0;
//
//    long long numP = stoll(p);
//    for (int i = 0; i <= t.length() - p.length(); i++)
//    {
//        string str = t.substr(i, p.length());
//        if (stoll(str) <= numP)
//        {
//            ++answer;
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    string t = "3141592";
//    string p = "271";
//
//    cout << solution(t, p) << endl;
//
//    return 0;
//}
