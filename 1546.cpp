#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int subjectNum;
	cin >> subjectNum;

	int originalScore[1000] = { 0 };
	for (int i = 0; i < subjectNum; i++)
		cin >> originalScore[i];

	int max = 0;
	for (int i = 0; i < subjectNum; i++) {
		if (max < originalScore[i])
			max = originalScore[i];
	}

	double manipulatedScore[1000] = { 0 };
	for (int i = 0; i < subjectNum; i++)
		manipulatedScore[i] = (double)originalScore[i] / max * 100;

	double sumOfManipulatedScore = 0;
	for (int i = 0; i < subjectNum; i++) {
		sumOfManipulatedScore += manipulatedScore[i];
	}

	double averageOfManipulatedScore = sumOfManipulatedScore / subjectNum;

	cout << averageOfManipulatedScore;

	return 0;
}