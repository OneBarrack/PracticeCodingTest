#include <iostream>
// ���� �ڵ��׽�Ʈ ���� 
// Lv.Bronze4 - Number of Vowels

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <sstream>
#include <numeric>
#include <deque>

using namespace std;
/*
���� �Է� 1
How are you today?
Quite well, thank you, how about yourself?
I live at number twenty four.
#
���� ��� 1
7
14
9
*/

int main()
{
	while ( true )
	{
		string s;
		getline(cin, s);
		if ( s == "#" )
			break;

		int vowelCount = 0;
		for ( char& c : s )
		{
			if ( c == 'a' || c == 'A' ||
				c == 'e' || c == 'E' ||
				c == 'i' || c == 'I' ||
				c == 'o' || c == 'O' ||
				c == 'u' || c == 'U' )
				++vowelCount;
		}

		cout << vowelCount << "\n";
	}

	return 0;
}