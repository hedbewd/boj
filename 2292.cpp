#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
	int N;
	scanf("%d", &N);

	int count = 0, sum = 1;
	while (sum < N) {
		sum += count * 6;
		count++;
	}
	if (N == 1) {
		printf("1");
	}
	else {
		printf("%d", count);
	}

	return 0;
}