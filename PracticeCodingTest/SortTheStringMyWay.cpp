//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv 1. ���ڿ� �� ������� �����ϱ�
//
//#include <string>
//#include <list>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
//#include <set>
//#include <map>
//#include <unordered_map>
//
//using namespace std;
//
//vector<string> solution(vector<string> strings, int n)
//{
//    vector<string> answer;
//
//    map<char, multiset<string>> sMap;
//    for ( string& s : strings )
//        sMap[s[n]].insert(s);
//
//    for ( auto& val : sMap )
//        for ( string s : val.second )
//            answer.push_back(s);
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> strings = { "sun", "bed", "car" };
//    vector<string> result = solution(strings, 1);
//    for ( string res : result )
//        cout << res << endl;
//
//    return 0;
//}