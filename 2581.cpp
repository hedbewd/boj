#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int arr[10001];

int main()
{
	int M, N;
	scanf("%d", &M);
	scanf("%d", &N);

	int k = 0;
	for (int i = M; i <= N; i++) {
		if (i == 1) {
			continue;
		}
		int flag = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag++;
				break;
			}
		}
		if (flag == 0) {
			arr[k] = i;
			k++;
		}
	}
	if (arr[0] == 0) {
		printf("-1");
	}
	else {
		int arr_length = 0;
		for (int i = 0; i < 10001; i++) {
			if (arr[i] != 0) {
				arr_length++;
			}
		}

		int sum = 0;
		int min = 10002;
		for (int i = 0; i < arr_length; i++) {
			sum += arr[i];
			if (min > arr[i]) {
				min = arr[i];
			}
		}

		printf("%d\n%d", sum, min);
	}

	return 0;
}