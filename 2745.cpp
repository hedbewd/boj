#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char N[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long B;
	cin >> N >> B;

	long long sum = 0, tmp = 1;
	for (int i = 0; i < strlen(N); i++) {
		if (i == 0) {
			if (N[strlen(N) - 1] >= 'A' && N[strlen(N) - 1] <= 'Z')
				sum = N[strlen(N) - 1] - 55;
			else
				sum = N[strlen(N) - 1] - 48;
		}
		else {
			tmp *= B;
			if (N[strlen(N) - (i + 1)] >= 'A' && N[strlen(N) - (i + 1)] <= 'Z')
				sum += (N[strlen(N) - (i + 1)] - 55) * tmp;
			else
				sum += (N[strlen(N) - (i + 1)] - 48) * tmp;
		}
	}

	cout << sum;

	return 0;
}