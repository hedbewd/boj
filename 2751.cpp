#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

// Heap Sort
int main()
{
	int N;
	scanf("%d", &N);

	int* arr = (int*)malloc(N * sizeof(int));
	int num;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int i = 1; i < N; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (arr[root] < arr[c]) {
				int temp = arr[root];
				arr[root] = arr[c];
				arr[c] = temp;
			}
			c = root;
		} while (c != 0);
	}

	for (int i = N - 1; i >= 0; i--) {
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		
		int root = 0;
		int c = 1;
		do {
			c = root * 2 + 1;
			if (c < i - 1 && arr[c] < arr[c + 1]) {
				c++;
			}
			if (c < i && arr[root] < arr[c]) {
				temp = arr[root];
				arr[root] = arr[c];
				arr[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}