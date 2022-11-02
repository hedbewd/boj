#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N, M, input_num;
	scanf("%d %d", &N, &M);
	int** arr1 = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * M);
	}
	int** arr2 = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		arr2[i] = (int*)malloc(sizeof(int) * M);
	}
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			scanf("%d", &input_num);
			arr1[i][j] = input_num;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &input_num);
			arr2[i][j] = input_num;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N; i++) {
		free(arr1[i]);
	}
	free(arr1);
	for (int i = 0; i < N; i++) {
		free(arr2[i]);
	}
	free(arr2);

	return 0;
}