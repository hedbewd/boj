#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int testCaseNum;
	cin >> testCaseNum;

	vector<vector<int>> testCase(10000, vector<int>(6,0));
	int num;
	for (int i = 0; i < testCaseNum; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> num;
			testCase[i][j] = num;
		}
	}

	int x1, y1, r1, x2, y2, r2, absOfSubr1r2;
	double d;
	vector<int> result(10000, 0);
	for (int i = 0; i < testCaseNum; i++) {
		x1 = testCase[i][0];
		y1 = testCase[i][1];
		r1 = testCase[i][2];
		x2 = testCase[i][3];
		y2 = testCase[i][4];
		r2 = testCase[i][5];

		d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		absOfSubr1r2 = abs(r1 - r2);
		
		if (d == 0 && absOfSubr1r2 == 0)
			result[i] = -1;
		else if ((double)(r1 + r2) > d && absOfSubr1r2 < d)
			result[i] = 2;
		else if ((double)(r1 + r2) == d || absOfSubr1r2 == d)
			result[i] = 1;
		else
			result[i] = 0;
	}

	for (int i = 0; i < testCaseNum; i++)
		cout << result[i] << endl;

	return 0;
}