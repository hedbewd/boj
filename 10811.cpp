#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

void rev(int first, int last, int* arr);
void swap(int* first, int* last);

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
		rev(i, j, arr);
	}

	for (int k = 0; k < N; k++) {
		cout << arr[k] << " ";
	}

	return 0;
}

void rev(int first, int last, int* arr) {
	for (int i = first - 1, j = last - 1; i < (last + first) / 2; i++, j--) {
		swap(&arr[i], &arr[j]);
	}
}

void swap(int* first, int* last) {
	int temp = *first;
	*first = *last;
	*last = temp;
}