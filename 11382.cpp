#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned long long int A, B, C;
	cin >> A >> B >> C;

	cout << A + B + C;

	return 0;
}