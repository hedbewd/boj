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

	sort(side, side + 3);

	while (1) {
		cin >> side[0] >> side[1] >> side[2];
		if (side[0] == 0 && side[1] == 0 && side[2] == 0)
			break;
		else if (side[0] + side[1] <= side[2])
			cout << "Invalid";
		else if (side[0] == side[1] && side[1] == side[2])
			cout << "Equilateral";
		else if (side[0] == side[1] && side[1] != side[2])
			cout << "Isosceles";
		else if (side[1] == side[2] && side[0] != side[1])
			cout << "Isosceles";
		else if (side[2] == side[0] && side[0] != side[1])
			cout << "Isosceles";
		else if (side[0] != side[1] && side[1] != side[2] && side[2] != side[0])
			cout << "Scalene";
		cout << endl;
	}

	return 0;
}