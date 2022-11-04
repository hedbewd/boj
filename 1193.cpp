#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
	int N;
	scanf("%d", &N);

	int denominator, numerator;
	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (count == N) {
			break;
		}
		for (int j = 1; j <= i; j++) {
			if (count == N) {
				break;
			}
			else {
				if (i % 2 == 0) {
					numerator = j;
					denominator = i - j + 1;
				}
				else {
					numerator = i - j + 1;
					denominator = j;
				}
				count++;
			}
		}
	}
	printf("%d/%d", numerator, denominator);

	return 0;
}