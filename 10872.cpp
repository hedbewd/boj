#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int fac(int N);

int main()
{
	int N;
	cin >> N;

	cout << fac(N);

	return 0;
}

int fac(int N)
{
	if (N == 0)
		return 1;
	else {
		return N * fac(N - 1);
	}
}