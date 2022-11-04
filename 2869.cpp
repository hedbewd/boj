#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);

	int day = (V - B) / (A - B);
	if ((V - B) % (A - B) == 0) {
		printf("%d", day);
	}
	else {
		printf("%d", day + 1);
	}

	return 0;
}