#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char word[101] = { 0 };
	cin >> word;

	char word_rev[101] = { 0 };
	strcpy(word_rev, word);

	reverse(word_rev, word_rev + strlen(word_rev));

	if (strcmp(word, word_rev) == 0)
		cout << '1';
	else
		cout << '0';

	return 0;
}