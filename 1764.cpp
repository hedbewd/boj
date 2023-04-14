#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<string, int> mp;
string person_total[500001];

int main()
{
	int N, M;
	cin >> N >> M;

	string person;
	int count = 0;
	for (int i = 0; i < N + M; i++) {
		cin >> person;
		mp[person]++;
		if (mp[person] > 1) {
			person_total[count] = person;
			count++;
		}
	}

	sort(person_total, person_total + count);

	cout << count << "\n";
	for (int i = 0; i < count; i++) {
		cout << person_total[i] << "\n";
	}

	return 0;
}