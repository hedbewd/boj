#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

void swap(int* a, int* b)
{
	int* temp = a;
	*a = *b;
	*b = *temp;
}

int main()
{
	int N;
	scanf("%d", &N);
	
	int* arr = (int*)malloc(N * sizeof(int));
		
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}