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

	int arr[9] = { 0 };
	int count = 0;
	for (int i = 1, j = 8; i <= 8; i++, j--) {
		cin >> arr[i];
		if (arr[i] == i)
			count++;
		else if (arr[i] == j)
			count += 2;
	}

	if (count == 8)
		cout << "ascending";
	else if (count == 16)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}