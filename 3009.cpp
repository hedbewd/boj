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

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	if (a == c) {	// x position
		cout << e << " ";
	}
	else {
		if (a == e) {
			cout << c << " ";
		}
		else {
			cout << a << " ";
		}
	}

	if (b == d) {	// y position
		cout << f << " ";
	}
	else {
		if (b == f) {
			cout << d << " ";
		}
		else {
			cout << b << " ";
		}
	}

	return 0;
}