#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> mp;

int main()
{
	int N, M;
	cin >> N >> M;

	int num;
	for (int i = 0; i < N + M; i++) {
		cin >> num;
		if (mp[num] == 1)
			mp.erase(num);
		else
			mp[num] = 1;
	}

	cout << mp.size();

	return 0;
}