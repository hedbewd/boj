#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int base = 0, sum = 2;
	for (int i = 0; i < N; i++) {
		sum += (int)pow(2, i);
	}

	cout << sum * sum;

	return 0;
}