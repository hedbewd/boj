#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int naturalNum[9] = { 0 };
	for (int i = 0; i < 9; i++) {
		cin >> naturalNum[i];
	}

	int max = 0;
	int max_idx;
	for (int i = 0; i < 9; i++) {
		if (max < naturalNum[i]) {
			max = naturalNum[i];
			max_idx = i + 1;
		}
	}

	cout << max << endl << max_idx;

	return 0;
}