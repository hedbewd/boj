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

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = 1001;
	int a = w - x, b = h - y;
	if (x < min) {
		min = x;
	}
	if (y < min) {
		min = y;
	}
	if (a < min) {
		min = a;
	}
	if (b < min) {
		min = b;
	}
	
	cout << min;

	return 0;
}