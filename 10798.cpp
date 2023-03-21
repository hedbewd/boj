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

	char arr_total[5][16] = {0};
	for (int i = 0; i < 5; i++) {
		cin >> arr_total[i];
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr_total[i][j] != '\0')
				cout << arr_total[i][j];
		}
	}

	return 0;
}