#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char subject[51] = { 0 };
	double score = 0;
	double score_total = 0;
	char grade_ch[3] = { 0 };
	double grade_num = 0;
	double grade_total = 0;
	for (int i = 0; i < 20; i++) {
		cin >> subject >> score >> grade_ch;
		if (strcmp(grade_ch, "P") == 0)
			continue;
		else {
			if (strcmp(grade_ch, "A+") == 0)
				grade_num = 4.5;
			else if (strcmp(grade_ch, "A0") == 0)
				grade_num = 4.0;
			else if (strcmp(grade_ch, "B+") == 0)
				grade_num = 3.5;
			else if (strcmp(grade_ch, "B0") == 0)
				grade_num = 3.0;
			else if (strcmp(grade_ch, "C+") == 0)
				grade_num = 2.5;
			else if (strcmp(grade_ch, "C0") == 0)
				grade_num = 2.0;
			else if (strcmp(grade_ch, "D+") == 0)
				grade_num = 1.5;
			else if (strcmp(grade_ch, "D0") == 0)
				grade_num = 1.0;
			else
				grade_num = 0.0;
			score_total += score;
			grade_total += grade_num * score;
		}
		for (int j = 0; j < 50; j++) {
			subject[j] = 0;
		}
		for (int j = 0; j < 2; j++) {
			grade_ch[j] = 0;
		}
	}

	cout << grade_total / score_total;

	return 0;
}