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

	int N, K;
	cin >> N >> K;

	int divisor_arr[10001] = { 0 };
	int count = 0;
	for (int i = 1; i <= 10000; i++) {
		if (N % i == 0) {
			divisor_arr[i] = 1;
			count++;
			if (count == K) {
				cout << i;
			}
		}
	}
	if (count < K) {
		cout << "0";
	}

	return 0;
}