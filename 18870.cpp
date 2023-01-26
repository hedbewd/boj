#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

typedef struct {
	int sorting_num;
	int idx;
} num;

bool compare(const num n1, const num n2) {
	return n1.sorting_num < n2.sorting_num;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	num* arr = (num*)calloc(N, sizeof(num));
	int i;
	for (i = 0; i < N; i++) {
		cin >> arr[i].sorting_num;
		arr[i].idx = i;
	}

	sort(arr, arr + N, compare);

	int* result = (int*)malloc(sizeof(int) * N);
	int cnt = -1, min = INT_MIN;
	for (i = 0; i < N; i++) {
		if (arr[i].sorting_num != min) {
			min = arr[i].sorting_num;
			cnt++;
		}
		result[arr[i].idx] = cnt;
	}

	for (i = 0; i < N; i++) {
		cout << result[i] << ' ';
	}

	free(arr);
	free(result);

	return 0;
}