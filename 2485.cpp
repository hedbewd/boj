#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int gcd(int a, int b);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int gcd_num = 0, min = 1000000001;
	for (int i = 0; i < N - 2; i++) {
		gcd_num = gcd(arr[i + 2] - arr[i + 1], arr[i + 1] - arr[i]);
		if (min > gcd_num)
			min = gcd_num;
	}

	cout << (arr[N - 1] - arr[0]) / min - 1 - (N - 2);

	delete[] arr;

	return 0;
}

int gcd(int a, int b)
{
	int r = a % b;
	if (r == 0)
		return b;
	else
		return gcd(b, r);
}