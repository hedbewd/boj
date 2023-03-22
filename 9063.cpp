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

	int* x = new int[N];
	int* y = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	sort(x, x + N);
	sort(y, y + N);

	cout << (x[N - 1] - x[0]) * (y[N - 1] - y[0]);

	delete[] x;
	delete[] y;

	return 0;
}