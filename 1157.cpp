#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[1000001] = { 0 };

int main()
{
	scanf("%s", word);

	int alphabet_count[26] = { 0 };
	int word_length_count = 0;
	for (int i = 0; i < 1000000; i++) {
		if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
			word_length_count++;
		}
	}
	for (int i = 0; i < word_length_count; i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			alphabet_count[word[i] - 'a']++;
		}
		else if (word[i] >= 'A' && word[i] <= 'Z') {
			alphabet_count[word[i] - 'A']++;
		}
	}

	int max = 0;
	int max_index;
	int max_same_count = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alphabet_count[i]) {
			max = alphabet_count[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alphabet_count[i]) {
			max_same_count++;
		}
	}
	if (max_same_count >= 2) {
		printf("?");
	}
	else {
		printf("%c", 'A' + max_index);
	}

	return 0;
}