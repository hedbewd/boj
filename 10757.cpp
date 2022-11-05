#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

void reverse(char* arr);

int main()
{
	char A[10002] = { 0 };
	char B[10002] = { 0 };
	scanf("%s %s", A, B);

	int str_len;
	if (strlen(A) > strlen(B))
		str_len = (int)strlen(A);
	else
		str_len = (int)strlen(B);

	reverse(A);
	reverse(B);

	char ans[10003] = { 0 };
	int carry = 0;
	for (int i = 0; i < str_len; i++) {
		int n = A[i] - '0' + B[i] - '0' + carry;
		if (n < 0) {
			n += '0';
		}
		if (n > 9) {
			carry = 1;
		}
		else {
			carry = 0;
		}
		ans[i] = n % 10 + '0';
	}
	if (carry == 1) {
		ans[str_len] = 1 + '0';
	}

	reverse(ans);
	printf("%s", ans);

	return 0;
}

void reverse(char* arr)
{
	int len = (int)strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}