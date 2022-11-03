#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char S[100] = { 0 };
	scanf("%s", S);

	int result[26];
	int check[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		result[i] = -1;
	}
	for (int i = 0; i < 100; i++) {
		if (check[S[i] - 'a'] == 1) {
			continue;
		}
		if (S[i] >= 'a' && S[i] <= 'z') {
			result[S[i] - 'a'] = i;
			check[S[i] - 'a'] = 1;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}