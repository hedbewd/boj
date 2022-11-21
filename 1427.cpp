#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>

int main()
{
	char N_char[11] = { 0 };
	scanf("%s", &N_char);

	int N_int[10] = { 0 };
	for (int i = 0; i < strlen(N_char); i++) {
		N_int[i] = N_char[i] - '0';
	}

	for (int i = 1; i < strlen(N_char); i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (N_int[root] > N_int[c]) {
				int temp = N_int[root];
				N_int[root] = N_int[c];
				N_int[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
	for (int i = strlen(N_char) - 1; i >= 0; i--) {
		int temp = N_int[0];
		N_int[0] = N_int[i];
		N_int[i] = temp;

		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (c < i - 1 && N_int[c] > N_int[c + 1]) {
				c++;
			}
			if (c < i && N_int[root] > N_int[c]) {
				int temp = N_int[root];
				N_int[root] = N_int[c];
				N_int[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	for (int i = 0; i < strlen(N_char); i++) {
		printf("%d", N_int[i]);
	}

	return 0;
}