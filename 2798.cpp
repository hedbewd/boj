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

	int N, M;
	cin >> N >> M;

	int* card_arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> card_arr[i];
	}

	int max = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (card_arr[i] + card_arr[j] + card_arr[k] <= M && card_arr[i] + card_arr[j] + card_arr[k] > max) {
					max = card_arr[i] + card_arr[j] + card_arr[k];
				}
			}
		}
	}

	cout << max;

	delete[] card_arr;

	return 0;
}