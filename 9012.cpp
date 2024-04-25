#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string str;
		stack<char> st;
		string result = "YES";

		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') 
				st.push('(');
			else if (str[j] == ')') {
				if (st.empty()) 
					result = "NO";
				else
					st.pop();
			}
		}
		if (!st.empty())
			result = "NO";

		cout << result << '\n';
	}

	return 0;
}