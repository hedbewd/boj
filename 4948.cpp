#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int dp[246913];

int main()
{
	dp[1] = 1;
	for (int i = 2; i <= 246912; i++) {
		for (int j = 2; i * j <= 246912; j++) {
			dp[i * j] = 1;
		}
	}

	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		else {
			int count = 0;
			for (int i = n + 1; i <= 2 * n; i++) {
				if (dp[i] == 0) {
					count++;
				}
			}
			printf("%d\n", count);
		}
	}

	return 0;
}