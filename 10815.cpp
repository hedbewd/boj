#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int map[20000002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num_got;
	for (int i = 0; i < N; i++) {
		cin >> num_got;
		map[num_got + 10000000] = 1;
	}

	int M;
	cin >> M;

	int num_check;
	for (int i = 0; i < M; i++) {
		cin >> num_check;
		if (map[num_check + 10000000] == 0)
			cout << 0 << " ";
		else
			cout << 1 << " ";
	}

	return 0;
}