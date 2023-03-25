#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int gcd(int A, int B);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A1, B1, A2, B2;
	cin >> A1 >> B1;
	cin >> A2 >> B2;

	int lcm = B1 * B2 / gcd(B1, B2);
	int result_numerator, result_denominator;
	result_numerator = (A1 * (lcm / B1)) + (A2 * (lcm / B2));
	result_denominator = lcm;
	int result_gcd = gcd(result_numerator, result_denominator);
	cout << result_numerator / result_gcd << " " << result_denominator / result_gcd;

	return 0;
}

int gcd(int A, int B)
{
	int r = A % B;
	if (r == 0)
		return B;
	else
		return gcd(B, r);
}