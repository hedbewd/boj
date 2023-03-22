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

	int n;
	int divisor_arr[100000] = { 0 };
	int sum = 0;
	while (1) {
		cin >> n;
		if (n == -1)
			break;
		else {
			for (int i = 1; i < n; i++) {
				if (n % i == 0) {
					divisor_arr[i] = 1;
					if (divisor_arr[i] == 1) {
						sum += i;
					}
				}
			}
			if (n == sum) {
				cout << n << " =" << " 1";
				for (int i = 2; i < n; i++) {
					if (divisor_arr[i] == 1) {
						cout << " + " << i;
					}
				}
				cout << endl;
			}
			else {
				cout << n << " is NOT perfect." << endl;
			}
			for (int i = 0; i < n; i++) {
				divisor_arr[i] = 0;
			}
			sum = 0;
		}
	}

	return 0;
}