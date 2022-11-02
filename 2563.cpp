#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int board[100][100] = { 0 };
	int area = 0;
	int num_color_paper, x, y;
	
	scanf("%d", &num_color_paper);
	for (int i = 0; i < num_color_paper; i++) {
		scanf("%d %d", &x, &y);
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (board[j][k] == 1) {
					continue;
				}
				area++;
				board[j][k] = 1;
			}
		}
	}
	printf("%d", area);

	return 0;
}