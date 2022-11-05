#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int dp[5001];

int main()
{
	int N;
	scanf("%d", &N);

	dp[3] = dp[5] = 1;
	for (int i = 6; i <= N; i++) {
		if (dp[i - 3]) {
			dp[i] = dp[i - 3] + 1;
		}
		if (dp[i - 5]) {
			if (dp[i]) {
				dp[i] = min(dp[i], dp[i - 5] + 1);
			}
			else {
				dp[i] = dp[i - 5] + 1;
			}
		}
	}
	if (dp[N]) {
		printf("%d", dp[N]);
	}
	else {
		printf("-1");
	}

	return 0;
}