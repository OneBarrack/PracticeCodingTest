#include <iostream>
// ���� �ڵ��׽�Ʈ ���� 
// Lv.Gold4 - Liar

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

using namespace std;

/*
���� �Է� 1
4 3
0
2 1 2
1 3
3 2 3 4
���� ��� 1
3
���� �Է� 2
4 1
1 1
4 1 2 3 4
���� ��� 2
0
���� �Է� 3
4 1
0
4 1 2 3 4
���� ��� 3
1
���� �Է� 4
4 5
1 1
1 1
1 2
1 3
1 4
2 4 1
���� ��� 4
2
���� �Է� 5
10 9
4 1 2 3 4
2 1 5
2 2 6
1 7
1 8
2 7 8
1 9
1 10
2 3 10
1 4
���� ��� 5
4
*/
int main()
{
    int N, M;
    cin >> N >> M;

    // ������ �ƴ� ���
    int knowTruthPeopleCount;
    cin >> knowTruthPeopleCount;

    vector<int> knowTruthPeople(knowTruthPeopleCount);
    for ( int i = 0; i < knowTruthPeopleCount; ++i )
        cin >> knowTruthPeople[i];

    set<int> orderedKnowTruthPeople(knowTruthPeople.begin(), knowTruthPeople.end());

    // ��Ƽ�� �����ο�
    list<vector<int>> parties;
    for ( int i = 0; i < M; ++i )
    {
        int partyPeopleCount;
        cin >> partyPeopleCount;

        vector<int> party(partyPeopleCount);
        for ( int j = 0; j < partyPeopleCount; ++j )
            cin >> party[j];

        parties.push_back(party);
    }

    // ������ �ƴ� ����� �ִ� ��Ƽ ����
    for ( int i = 0; i < knowTruthPeople.size(); ++i )
    {
        int knowTruthPerson = knowTruthPeople[i];
        for ( auto iter = parties.begin(); iter != parties.end(); )
        {
            vector<int> party = *iter;
            if ( find(party.begin(), party.end(), knowTruthPerson) != party.end() )
            {
                for ( int person : party )
                {
                    if ( orderedKnowTruthPeople.insert(person).second )
                        knowTruthPeople.push_back(person);
                }

                iter = parties.erase(iter);
            }
            else
            {
                ++iter;
            }
        }
    }

    cout << parties.size();

    return 0;
}