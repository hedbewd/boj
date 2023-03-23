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

	int num, num_cpy;
	int dec_cnt = 0;
	while (1) {
		cin >> num;
		num_cpy = num;
		if (num == 0)
			break;
		else {
			while (1) {
				dec_cnt++;
				num_cpy /= 10;
				if (num_cpy == 0)
					break;
			}
			if (dec_cnt == 1)
				cout << "yes" << endl;
			else if (dec_cnt == 2) {
				if (num % 10 == num / 10)
					cout << "yes" << endl;
				else
					cout << "no" << endl;
			}
			else if (dec_cnt == 3) {
				if (num % 10 == num / 100)
					cout << "yes" << endl;
				else
					cout << "no" << endl;
			}
			else if (dec_cnt == 4) {
				if (num % 10 == num / 1000) {
					num /= 10;
					num %= 100;
					if (num % 10 == num / 10)
						cout << "yes" << endl;
					else
						cout << "no" << endl;
				}
				else
					cout << "no" << endl;
			}
			else if (dec_cnt == 5) {
				if (num % 10 == num / 10000) {
					num /= 10;
					num %= 1000;
					if (num % 10 == num / 100)
						cout << "yes" << endl;
					else
						cout << "no" << endl;
				}
				else
					cout << "no" << endl;
			}
		}
		dec_cnt = 0;
	}

	return 0;
}