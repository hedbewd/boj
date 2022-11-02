#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int arr[3] = { 0 };
	int x, y, z, result_money;
	scanf("%d %d %d", &x, &y, &z);
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;
	int max_num = x;
	for (int i = 0; i < 3; i++) {
		if (arr[i] > max_num)
			max_num = arr[i];
	}
	if (x == y) {
		if (y != z) {
			result_money = 1000 + 100 * x;
		}
	}
	else if (y == z) {
		result_money = 1000 + 100 * y;
	}
	else if (x == z) {
		result_money = 1000 + 100 * x;
	}
	if (x == y && y == z && z == x) {
		result_money = 10000 + 1000 * x;
	}
	if (x != y && y != z && z != x) {
		result_money = max_num * 100;
	}
	printf("%d", result_money);

	return 0;
}