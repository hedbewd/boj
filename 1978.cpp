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

	int count = 0;
	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		if (num == 1)	continue;
		int flag = 0;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				flag++;
			}
		}
		if (flag == 0) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}