#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

#define default 10000000

using namespace std;

int arr[20000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num + default]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		cout << arr[num + default] << " ";
	}

	return 0;
}