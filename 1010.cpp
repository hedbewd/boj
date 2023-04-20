#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;
		
		int num = 1;
		for (int j = 0; j < N; j++) {
			num *= M - j;
			num /= j + 1;
		}

		cout << num << "\n";
	}

	return 0;
}