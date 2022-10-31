#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Dynamic Programming, standard is fibonacci(1)
	int dp[41] = { 0, 1, 1 };

	// Input test case
	int testCaseNum;
	cin >> testCaseNum;

	vector<vector<int>> testCaseArr(testCaseNum, vector<int>(1, 0));
	int testCase;
	for (int i = 0; i < testCaseNum; i++) {
		cin >> testCase;
		testCaseArr[i][0] = testCase;
	}

	// Calculate dynamic programming
	for (int i = 3; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	for (int i = 0; i < testCaseNum; i++) {
		if (dp[testCaseArr[i][0]] == 0) {
			cout << "1 0" << endl;
		}
		else {
			cout << dp[testCaseArr[i][0] - 1] << " " << dp[testCaseArr[i][0]] << endl;
		}
	}

	return 0;
}