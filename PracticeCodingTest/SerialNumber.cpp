//#include <iostream>
//// ���α׷��ӽ� �ڵ��׽�Ʈ ���� 
//// Lv.Silver3 - 1431. Serial Number
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
//5
//ABCD
//145C
//A
//A910
//Z321
//���� ��� 1
//A
//ABCD
//Z321
//145C
//A910
//���� �Է� 2
//2
//Z19
//Z20
//���� ��� 2
//Z20
//Z19
//*/
//
//bool compare(string& a, string& b)
//{
//    // condition 1. A�� B�� ���̰� �ٸ���, ª�� ���� ���� �´�.
//    if ( a.length() != b.length() )
//        return a.length() < b.length();
//    
//    // condition 2. ���� ���� ���̰� ���ٸ�, A�� ��� �ڸ����� �հ� 
//    // B�� ��� �ڸ����� ���� ���ؼ� ���� ���� ������ ���� �����´�. 
//    // (������ �͸� ���Ѵ�)
//    int sumA = 0;
//    int sumB = 0;
//    for ( char& c : a ) if ( isdigit(c) ) sumA += (int)(c - '0');
//    for ( char& c : b ) if ( isdigit(c) ) sumB += (int)(c - '0');
//
//    if ( sumA != sumB )
//        return sumA < sumB;
//
//    // condition 3. ���� 1,2�� �� �������ε� ���� �� ������, ���������� 
//    // ���Ѵ�. ���ڰ� ���ĺ����� ���������� �۴�.
//    return a < b;
//}
//
//int main()
//{
//    int N;
//    cin >> N;
//    cin.ignore();
//
//    vector<string> serialNumbers(N);
//    for ( int i = 0; i < N; ++i )
//        getline(cin, serialNumbers[i]);
//
//    sort(serialNumbers.begin(), serialNumbers.end(), compare);
//    for ( string& s : serialNumbers )
//        cout << s << "\n";
//
//    return 0;
//}