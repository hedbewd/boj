#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d", &N);

	int count = 0;
	int remainder_arr[3] = { 0 };
	for (int i = 1; i <= N; i++) {
		if (i < 100) {
			count++;
		}
		else if (i >= 100 && i < 1000) {
			int quotient_buf = i;
			for (int j = 0; j < 3; j++) {
				remainder_arr[j] = quotient_buf % 10;
				quotient_buf /= 10;
			}
			int x = remainder_arr[1] - remainder_arr[0];
			int y = remainder_arr[2] - remainder_arr[1];
			if (x == y) {
				count++;
			}
		}
		else {
			break;
		}
	}
	printf("%d", count);

	return 0;
}