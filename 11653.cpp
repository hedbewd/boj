#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	while (1) {
		for (int i = 2; i <= N; i++) {
			if (N % i == 0) {
				printf("%d\n", i);
				N /= i;
				break;
			}
		}
		if (N == 1) {
			break;
		}
	}

	return 0;
}