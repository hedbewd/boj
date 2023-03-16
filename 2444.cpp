#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < 2 * (N - 1) + 1; i++) {
		if (i < N - 1) {
			for (int j = i; j < N - 1; j++) {
				cout << ' ';
			}
			for (int j = 0; j < 2 * i + 1; j++) {
				cout << '*';
			}
			cout << endl;
		}
		else if (i == N - 1) {
			for (int j = 0; j < 2 * N - 1; j++) {
				cout << '*';
			}
			cout << endl;
		}
		else {
			for (int j = N - 1; j < i; j++) {
				cout << ' ';
			}
			for (int j = 2 * i + 1; j < 2 * 2 * N - 2; j++) {
				cout << '*';
			}
			cout << endl;
		}
	}

	return 0;
}