#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	int group_word_count = 0;
	for (int i = 0; i < N; i++) {
		char word[101] = { 0 };
		int check[27] = { 0 };
		int flag = 0;
		char buf = 0;
		scanf("%s", word);
		for (int j = 0; j < strlen(word); j++) {
			if (buf != word[j]) {
				buf = word[j];
				check[word[j] - 'a']++;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (check[j] > 1) {
				flag++;
			}
		}
		if (flag > 0) {
			continue;
		}
		group_word_count++;
	}
	printf("%d", group_word_count);

	return 0;
}