#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	long long num;
	stack<long long> st;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			if (st.empty()) continue;
			else st.pop();
		}
		else {
			st.push(num);
		}
	}

	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << '\n';

	return 0;
}