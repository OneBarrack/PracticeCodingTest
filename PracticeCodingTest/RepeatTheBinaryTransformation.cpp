//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv.2 - ���� ��ȯ �ݺ��ϱ�
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
//#include <sstream>
//#include <numeric>
//
//using namespace std;
//
//string DecimalToBinary(int num)
//{
//    string s = "";
//    while ( num > 0 )
//    {
//        if ( num % 2 == 1 ) s = "1" + s;
//        else s = "0" + s;
//        num >>= 1;
//    }
//    return s;
//}
//
//vector<int> solution(string s)
//{
//    vector<int> answer(2);
//
//    while ( s != "1" )
//    {
//        int zeroCount = count(s.begin(), s.end(), '0');
//        int oneCount = s.size() - zeroCount;
//        s = DecimalToBinary(oneCount);
//
//        ++answer[0];
//        answer[1] += zeroCount;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    string s = "110010101001";
//    vector<int> result = solution(s);
//    cout << result[0] << " " << result[1] << endl;
//
//    return 0;
//}