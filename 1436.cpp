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

	int N;
	cin >> N;

	int count = 0, title = 665;
	while (count < N) {
		title++;
		int title_tmp = title;

		while (1) {
			if (title_tmp % 1000 == 666) {
				count++;
				break;
			}
			else {
				title_tmp /= 10;
				if (title_tmp == 0)
					break;
			}
		}
	}

	cout << title;

	return 0;
}