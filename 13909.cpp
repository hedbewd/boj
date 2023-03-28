#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (i * i <= N && N < (i + 1) * (i + 1)) {
			count++;
			break;
		}
		else {
			count++;
		}
	}

	cout << count;

	return 0;
}