#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N, input_int, v;
	int count = 0;
	scanf("%d", &N);
	int* arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &input_int);
		arr[i] = input_int;
	}
	scanf("%d", &v);
	for (int i = 0; i < N; i++) {
		if(arr[i] == v) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}