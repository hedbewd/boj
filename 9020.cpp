#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int dp[10001];

int main()
{
	dp[1] = 1;
	for (int i = 2; i <= 10000; i++) {
		for (int j = 2; i * j <= 10000; j++) {
			dp[i * j] = 1;
		}
	}

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int n;
		scanf("%d", &n);

		for (int j = n / 2; j > 0; j--) {
			if (dp[j] == 0 && dp[n - j] == 0) {
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}

	return 0;
}