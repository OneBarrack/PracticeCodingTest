//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// [PCCP ���⹮��] 9�� / ���� ����
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
//int solution(vector<int> wallet, vector<int> bill) {
//    int answer = 0;
//
//    int minWalletSize = min(wallet[0], wallet[1]);
//    int maxWalletSize = max(wallet[0], wallet[1]);
//    int minBillSize = min(bill[0], bill[1]);
//    int maxBillSize = max(bill[0], bill[1]);
//
//    while (true)
//    {
//        if (minBillSize <= minWalletSize && maxBillSize <= maxWalletSize)
//            break;
//
//        maxBillSize /= 2;
//
//        if (minBillSize > maxBillSize)
//        {
//            swap(minBillSize, maxBillSize);
//        }
//
//        ++answer;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> wallet = {30, 15};
//    vector<int> bill = {26, 17};
//
//    cout << solution(wallet, bill) << endl;
//
//    return 0;
//}
