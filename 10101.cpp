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

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral";
	else if (a + b + c == 180) {
		if (a == b || b == c || c == a)
			cout << "Isosceles";
		else if (a != b && b != c && c != a)
			cout << "Scalene";
	}
	else if (a + b + c != 180)
		cout << "Error";

	return 0;
}