#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int input_num;
	int board[9][9] = { 0 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &input_num);
			board[i][j] = input_num;
		}
	}

	int max = 0;
	int max_index[2] = { 0 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < board[i][j]) {
				max = board[i][j];
				max_index[0] = i;
				max_index[1] = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", max_index[0] + 1, max_index[1] + 1);

	return 0;
}