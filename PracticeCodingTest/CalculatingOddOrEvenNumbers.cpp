//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Ȧ¦�� ���� �ٸ� �� ��ȯ�ϱ�
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
//
//using namespace std;
//
//int solution(int n) {
//    int answer = 0;
//
//    bool isOdd = (n % 2 == 1) ? true : false;
//    while (n > 0)
//    {
//        if (isOdd)
//        {
//            if (n % 2 == 1)
//            {
//                answer += n;
//            }
//        }
//        else
//        {
//            if (n % 2 == 0)
//            {
//                answer += n * n;
//            }
//        }
//
//        --n;
//    }
//
//    return answer;
//}
//
//int main(void) {
//    int n = 10;
//
//    cout << solution(n) << endl;
//
//    return 0;
//}