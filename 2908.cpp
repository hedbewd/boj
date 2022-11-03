#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char A[4] = { 0 };
	char B[4] = { 0 };
	scanf("%s %s", A, B);

	char reverse_A[4] = { 0 };
	char reverse_B[4] = { 0 };
	for (int i = 0; i < 3; i++) {
		reverse_A[i] = A[2 - i];
		reverse_B[i] = B[2 - i];
	}
	int num_A = atoi(reverse_A);
	int num_B = atoi(reverse_B);
	if (num_A > num_B) {
		printf("%d", num_A);
	}
	else {
		printf("%d", num_B);
	}

	return 0;
}