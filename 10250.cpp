#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);

	int  H, W, N;
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		int room;
		if (N % H == 0) {
			printf("%d", H);
			room = N / H;
		}
		else {
			printf("%d", N % H);
			room = N / H + 1;
		}
		if (room >= 10) {
			printf("%d\n", room);
		}
		else {
			printf("0%d\n", room);
		}
	}

	return 0;
}