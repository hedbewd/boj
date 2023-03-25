#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

long long gcd(long long A, long long B);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	cin >> A >> B;
	cout << (A * B) / gcd(A, B);

	return 0;
}

long long gcd(long long A, long long B)
{
	long long r = A % B;
	if (r == 0)
		return B;
	else
		return gcd(B, r);
}