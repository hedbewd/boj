#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int testCaseNum;
	cin >> testCaseNum;

	char testCase[100][80] = { 0 };
	for (int i = 0; i < testCaseNum; i++) {
		cin >> testCase[i];
	}

	int testCaseNumCounter[100] = { 0 };
	for (int i = 0; i < testCaseNum; i++) {
		int j = 0;
		while (1) {
			if (testCase[i][j] == 'O' || testCase[i][j] == 'X')
				testCaseNumCounter[i]++;
			else
				break;
			j++;
		}
	}

	int score[100] = { 0 };
	int scoreBuf = 0;
	int scoreBufSum = 0;
	for (int i = 0; i < testCaseNum; i++) {
		for (int j = 0; j < testCaseNumCounter[i]; j++) {
			if (testCase[i][j] == 'O') {
				scoreBuf++;
				scoreBufSum += scoreBuf;
			}
			else if (testCase[i][j] == 'X')
				scoreBuf = 0;
		}
		score[i] = scoreBufSum;
		scoreBufSum = 0;
		scoreBuf = 0;
	}

	for (int i = 0; i < testCaseNum; i++)
		cout << score[i] << endl;

	return 0;
}