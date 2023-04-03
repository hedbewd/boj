#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, string, greater<string>> enter_log;
map<string, string>::iterator iter;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	
	string name, status;
	for (int i = 0; i < n; i++) {
		cin >> name >> status;
		if (status == "enter")
			enter_log.insert({ name, status });
		else
			enter_log.erase(name);
	}

	for (iter = enter_log.begin(); iter != enter_log.end(); iter++) {
		if (iter->second == "enter")
			cout << iter->first << "\n";
	}

	return 0;
}