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
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	int average = sum / 5;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	printf("%d\n%d", average, arr[2]);

	return 0;
}