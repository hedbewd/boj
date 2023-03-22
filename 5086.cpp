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

	int first, second;
	while (1) {
		cin >> first >> second;
		if (first == 0 && second == 0)
			break;
		else {
			if (second / first != 0 && second % first == 0)
				cout << "factor" << endl;
			else if (first / second != 0 && first % second == 0)
				cout << "multiple" << endl;
			else
				cout << "neither" << endl;
		}
	}

	return 0;
}