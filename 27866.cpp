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

	char S[1001] = { 0 };
	int i;
	cin >> S >> i;

	cout << S[i - 1];

	return 0;
}