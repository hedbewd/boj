#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int C;
	for (int i = 0; i < T; i++) {
		cin >> C;
		int Q = 0, D = 0, N = 0, P = 0;
		while (C != 0) {
			if (C >= 25) {
				Q++;
				C -= 25;
			}
			else if (10 <= C && C < 25) {
				D++;
				C -= 10;
			}
			else if (5 <= C && C < 10) {
				N++;
				C -= 5;
			}
			else {
				P++;
				C -= 1;
			}
		}
		cout << Q << " " << D << " " << N << " " << P << endl;
	}

	return 0;
}