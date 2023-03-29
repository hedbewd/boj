#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

map<string, bool> map1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	string str1;
	for (int i = 0; i < N; i++) {
		cin >> str1;
		map1[str1] = true;
	}

	int count = 0;
	for (int i = 0; i < M; i++) {
		cin >> str1;
		if (map1[str1] == true)
			count++;
	}

	cout << count;

	return 0;
}