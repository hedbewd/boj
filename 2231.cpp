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

	int gen_min;
	int count = 0;
	for (int i = 1; i < N; i++) {
		int i_copy = i;
		int sum = 0;
		while (1) {
			sum += i_copy % 10;
			i_copy /= 10;
			if (i_copy == 0) {
				break;
			}
		}
		sum += i;
		if (sum == N) {
			gen_min = i;
			count++;
			break;
		}
	}

	if (count > 0)
		cout << gen_min;
	else
		cout << 0;

	return 0;
}