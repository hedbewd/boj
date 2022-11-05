#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);

	int arr[15][14] = { 0 };
	for (int i = 0; i < 14; i++) {
		arr[0][i] = i + 1;
	}
	for (int i = 1; i < 15; i++) {
		int sum = 0;
		for (int j = 0; j < 14; j++) {
			sum += arr[i - 1][j];
			arr[i][j] = sum;
		}
	}
	for (int i = 0; i < T; i++) {
		int k;
		scanf("%d", &k);
		int n;
		scanf("%d", &n);
		printf("%d\n", arr[k][n - 1]);
	}

	return 0;
}