#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, B;
	cin >> N >> B;

	string changed_num;
	while (N != 0) {
		int r = N % B;
		if (r > 9) {
			r = r + 55;
			changed_num += r;
		}
		else {
			changed_num += (r + 48);
		}
		N /= B;
	}
	
	reverse(changed_num.begin(), changed_num.end());

	cout << changed_num;

	return 0;
}