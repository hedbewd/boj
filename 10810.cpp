#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int i, j, k;
	int arr[100] = { 0 };
	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;
		for (int m = i - 1; m < j; m++) {
			arr[m] = k;
		}
	}

	for (int l = 0; l < N; l++) {
		cout << arr[l] << " ";
	}

	return 0;
}