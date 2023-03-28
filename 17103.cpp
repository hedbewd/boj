#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

#define MAX 1000000

using namespace std;

int arr[MAX + 1];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 2; i <= MAX; i++) {
		arr[i] = i;
	}
	
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i * i; j <= MAX; j += i)
			arr[j] = 0;
	}
	
	int T;
	cin >> T;

	int n;
	for (int i = 0; i < T; i++) {
		int count = 0;
		cin >> n;
		for (int j = 2; j <= n / 2; j++) {
			if (arr[j] + arr[n - j] == n)
				count++;
		}
		cout << count << endl;
	}

	return 0;
}