#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char word[101] = { 0 };
	scanf("%s", word);

	int cro_alphabet_count = 0;
	for (int i = 0; i < 100; i++) {
		if (i < 98) {
			if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
				cro_alphabet_count++;
				i += 2;
				continue;
			}
		}
		if (i < 99) {
			if (word[i] == 'c' && word[i + 1] == '=') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 'c' && word[i + 1] == '-') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 'd' && word[i + 1] == '-') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 'l' && word[i + 1] == 'j') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 'n' && word[i + 1] == 'j') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 's' && word[i + 1] == '=') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
			else if (word[i] == 'z' && word[i + 1] == '=') {
				cro_alphabet_count++;
				i += 1;
				continue;
			}
		}
		if (word[i] >= 'a' && word[i] <= 'z') {
			cro_alphabet_count++;
		}
	}
	printf("%d", cro_alphabet_count);

	return 0;
}