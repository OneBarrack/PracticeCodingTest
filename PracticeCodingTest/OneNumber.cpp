//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv.Silver4 - 1165. One Number
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
//110
//���� ��� 1
//99
//���� �Է� 2
//1
//���� ��� 2
//1
//���� �Է� 3
//210
//���� ��� 3
//105
//���� �Է� 4
//1000
//���� ��� 4
//144
//���� �Է� 5
//500
//���� ��� 5
//119
//*/
//
//bool IsOneNumber(int n)
//{
//    if ( n < 100 )
//        return true;
//
//    int prevNum = n % 10; n /= 10;
//    int curNum = n % 10; n /= 10;
//    int fixedGapSize = curNum - prevNum;
//    
//    while ( n > 0 )
//    {
//        prevNum = curNum;
//        curNum = n % 10;
//
//        int gap = curNum - prevNum;
//        if ( gap != fixedGapSize )
//            return false;
//
//        n /= 10;
//    }
//
//    return true;
//}
//
//int main()
//{
//    int N;
//    cin >> N;
//
//    int answer = 0;
//    for ( int i = 1; i <= N; ++i )
//        if ( IsOneNumber(i) )
//            ++answer;
//
//    cout << answer;
//
//    return 0;
//}