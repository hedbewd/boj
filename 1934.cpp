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

	int T;
	cin >> T;

	int A, B;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		int A_tmp = A, B_tmp = B;
		int div_mult = 1, flag = 0;
		if (A == 1)
			cout << B << endl;
		else if (B == 1)
			cout << A << endl;
		else {
			while (1) {
				int div = 2;
				while (1) {
					if (A_tmp % div == 0 && B_tmp % div == 0) {
						A_tmp /= div;
						B_tmp /= div;
						div_mult *= div;
						break;
					}
					else {
						div++;
						if (div > A_tmp || div > B_tmp) {
							flag++;
							break;
						}
					}
				}
				if (flag > 0)
					break;
			}
			cout << div_mult * A_tmp * B_tmp << endl;
		}
	}

	return 0;
}