#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N / 4; i++) {
		cout << "long ";
	}

	cout << "int";

	return 0;
}