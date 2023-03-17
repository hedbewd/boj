#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void swch(int* arr, int i, int j, int k);
void swap(int* a, int* b);

int arr_temp[100];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int arr[100] = { 0 };
	cin >> N >> M;
	for (int l = 0; l < N; l++) {
		arr[l] = l + 1;
	}

	int i, j, k;
	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;
		swch(arr, i, j, k);
	}
	for (int l = 0; l < N; l++) {
		cout << arr[l] << ' ';
	}

	return 0;
}

void swch(int* arr, int i, int j, int k)
{
	int i1, j1, k1;
	i1 = i; j1 = j; k1 = k;
	for (int l = i - 1; l < j; l++) {
		arr_temp[l] = arr[l];
	}
	for (int l = 0; l < j - k + 1; l++, i1++, k1++) {
		swap(arr[i1 - 1], arr[k1 - 1]);
	}
	for (int l = i1 - 1; l < j; l++, i++) {
		swap(arr[l], arr_temp[i - 1]);
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}