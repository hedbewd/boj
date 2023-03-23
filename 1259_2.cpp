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

	char num[6] = { 0 };
	char num_cpy[6] = { 0 };
	while (1) {
		cin >> num;
		if (num[0] == '0')
			break;
		else {
			strcpy(num_cpy, num);
			reverse(num, num + strlen(num));
			if (strcmp(num_cpy, num) == 0)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}

	return 0;
}