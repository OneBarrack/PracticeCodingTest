//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv.Bronze3 - Cell Phone Bills
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
//3
//40 40 40
//���� ��� 1 
//M 45
//����: 20 + 20 + 20 = 60
//�ν�: 15 + 15 + 15 = 45
//���� �Է� 2 
//3
//61 61 61
//���� ��� 2 
//Y M 90
//���� �Է� 3 
//2
//61 10
//���� ��� 3 
//Y 40
//*/
//
//int main()
//{
//    int N;
//    cin >> N;
//
//    vector<int> callingTimes(N);
//    for ( int i = 0; i < N; ++i )
//        cin >> callingTimes[i];
//
//    int FeeByYSPlan = 0;
//    int FeeByMSPlan = 0;
//    for ( int callingTime : callingTimes )
//    {         
//        FeeByYSPlan += 10 + callingTime / 30 * 10;
//        FeeByMSPlan += 15 + callingTime / 60 * 15;
//    }
//
//    if ( FeeByYSPlan < FeeByMSPlan )
//        cout << "Y " << FeeByYSPlan;
//    else if ( FeeByYSPlan > FeeByMSPlan )
//        cout << "M " << FeeByMSPlan;
//    else // ( FeeByYSPlan == FeeByMSPlan )
//        cout << "Y M " << FeeByYSPlan;
//
//    return 0;
//}