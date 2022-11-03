#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

char sentence[1000001] = { 0 };

int main()
{
	scanf("%[^\n]s", sentence);
	int blank_count = 0;
	if (sentence[0] != ' ') {
		blank_count++;
	}
	for (int i = 1; i < strlen(sentence); i++) {
		if (sentence[i - 1] == ' ' && sentence[i] != ' ') {
			blank_count++;
		}
	}
	printf("%d", blank_count);

	return 0;
}