#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<string, int> book;
string book_str[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	string poketmon;
	for (int i = 1; i <= N; i++) {
		cin >> poketmon;
		book.insert({ poketmon, i });
		book_str[i] = poketmon;
	}

	string problem;
	for (int i = 0; i < M; i++) {
		cin >> problem;
		if (book.find(problem) != book.end()) {
			cout << book.find(problem)->second;
		}
		else {
			int problem_int = stoi(problem);
			cout << book_str[problem_int];
		}
		cout << "\n";
	}

	return 0;
}