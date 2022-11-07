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
	int N, k;
	scanf("%d %d", &N, &k);

	int arr[1000] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	printf("%d", arr[k - 1]);

	return 0;
}