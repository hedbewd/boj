#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int dp[1000001];

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	dp[1] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 2; i * j <= N; j++) {
			dp[i * j] = 1;
		}
	}
	for (int i = M; i <= N; i++) {
		if (dp[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}