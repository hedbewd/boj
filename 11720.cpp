#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d", &N);

	char num;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		scanf(" %c", &num);
		sum += num - '0';
	}
	printf("%d", sum);

	return 0;
}