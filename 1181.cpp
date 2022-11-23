#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

string word[20000];

int compare(string a, string b)
{
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}

	sort(word, word + N, compare);

	for (int i = 0; i < N; i++) {
		if (i > 0) {
			if (word[i] == word[i - 1]) {
				continue;
			}
		}
		cout << word[i] << endl;
	}

	return 0;
}