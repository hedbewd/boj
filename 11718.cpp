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

	char arr[101] = { 0 };
	while (scanf("%c", &arr) != EOF) {
		cout << arr;
	}

	return 0;
}