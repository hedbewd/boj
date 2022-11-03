#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int T;
	scanf("%d", &T);

	int R;
	for (int i = 0; i < T; i++) {
		char S[21] = { 0 };
		char P[161] = { 0 };
		int count = 0;
		scanf("%d %s", &R, S);
		for (int j = 0; j < 21; j++) {
			if ((S[j] >= '0' && S[j] <= '9') || (S[j] >= 'A' && S[j] <= 'Z') || S[j] == '\\' || S[j] == '$' || S[j] == '%' || S[j] == '*' || S[j] == '+' || S[j] == '-' || S[j] == '.' || S[j] == '/' || S[j] == ':') {
				count++;
			}
		}
		for (int j = 0; j < count; j++) {
			int l = j * R;
			for (int k = 0; k < R; k++) {
				P[l + k] = S[j];
			}
		}
		printf("%s\n", P);
	}

	return 0;
}