#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

void swap(int* first, int* second);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int i, j;
	int arr[100] = { 0 };
	for (int k = 0; k < N; k++) {
		arr[k] = k + 1;
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		swap(&arr[i - 1], &arr[j - 1]);
	}

	for (int k = 0; k < N; k++) {
		cout << arr[k] << " ";
	}

	return 0;
}

void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}