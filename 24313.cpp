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

	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	if (a1 > c)
		cout << 0;
	else if (a1 == c) {
		if (a0 <= 0)
			cout << 1;
		else
			cout << 0;
	}
	else {
		if (a1 * n0 + a0 <= c * n0)
			cout << 1;
		else
			cout << 0;
	}

	return 0;
}