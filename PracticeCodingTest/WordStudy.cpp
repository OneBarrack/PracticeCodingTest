//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv.Bronze1 - Word Study
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
///*
//���� �Է� 1
//Mississipi
//���� ��� 1
//?
//���� �Է� 2
//zZa
//���� ��� 2
//Z
//���� �Է� 3
//z
//���� ��� 3
//Z
//���� �Է� 4
//baaa
//���� ��� 4
//A
//*/
//
//int main()
//{
//    string s;
//    getline(cin, s);
//
//    unordered_map<char, int> wordCounts;
//    for ( char& c : s )
//        ++wordCounts[tolower(c)];
//
//    multimap<int, char> orderedWordForCount;
//    for ( auto& wordInfo : wordCounts )
//        orderedWordForCount.insert(make_pair(wordInfo.second, wordInfo.first));
//     
//    char answer;
//    if ( orderedWordForCount.count(orderedWordForCount.rbegin()->first) == 1 )
//        answer = toupper(orderedWordForCount.rbegin()->second);
//    else
//        answer = '?';
//        
//    cout << answer;
//
//    return 0;
//}