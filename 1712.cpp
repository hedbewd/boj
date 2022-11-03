#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int x;
	if (B >= C) {
		x = -1;
	}
	else {
		x = (A / (C - B)) + 1;
	}
	printf("%d", x);

	return 0;
}