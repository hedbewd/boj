#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	int testCaseNum;
	cin >> testCaseNum;

	int numberOfStudents = 0;
	int scoreOfStudents[1000] = { 0 };
	int sumOfScoreOfStudents = 0;
	double averageOfScoreOfStudents = 0;
	int countBetterThanAverage = 0;
	double calculateRateOfBetterThanAverage = 0;
	double rateOfBetterThanAverage[1000] = { 0 };
	for (int i = 0; i < testCaseNum; i++) {
		cin >> numberOfStudents;

		for (int j = 0; j < numberOfStudents; j++) {
			cin >> scoreOfStudents[j];
		}

		for (int j = 0; j < numberOfStudents; j++) {
			sumOfScoreOfStudents += scoreOfStudents[j];
		}

		averageOfScoreOfStudents = (double)sumOfScoreOfStudents / numberOfStudents;

		for (int j = 0; j < numberOfStudents; j++) {
			if ((double)scoreOfStudents[j] > averageOfScoreOfStudents)
				countBetterThanAverage++;
		}

		calculateRateOfBetterThanAverage = ((double)countBetterThanAverage) / numberOfStudents * 100;
		calculateRateOfBetterThanAverage = (round(calculateRateOfBetterThanAverage * 1000)) / 1000.0;
		rateOfBetterThanAverage[i] = calculateRateOfBetterThanAverage;

		for (int j = 0; j < 1000; j++)
			scoreOfStudents[j] = 0;
		sumOfScoreOfStudents = 0;
		averageOfScoreOfStudents = 0;
		countBetterThanAverage = 0;
		calculateRateOfBetterThanAverage = 0;
	}

	for (int i = 0; i < testCaseNum; i++) {
		printf("%.3f", rateOfBetterThanAverage[i]);
		printf("%%\n");
	}

	return 0;
}