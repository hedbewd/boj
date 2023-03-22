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

	int side[3] = { 0 };
	cin >> side[0] >> side[1] >> side[2];
	
	sort(side, side + 3);

	if (side[0] + side[1] > side[2])
		cout << side[0] + side[1] + side[2];
	else {
		cout << 2 * (side[0] + side[1]) - 1;
	}

	return 0;
}