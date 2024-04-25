#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	stack<int> stack;
	int cmd, num, num_print;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == 1) {
			cin >> num;
			stack.push(num);
		}
		else if (cmd == 2) {
			if (stack.empty() != 1) {
				num_print = stack.top();
				stack.pop();
				cout << num_print << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == 3) cout << stack.size() << '\n';
		else if (cmd == 4) {
			if (stack.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (cmd == 5) {
			if (!stack.empty()) cout << stack.top() << '\n';
			else cout << -1 << '\n';
		}
	}

	return 0;
}