#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
	int testCaseNum;
	scanf("%d", &testCaseNum);

	int start[2];
	int arrival[2];
	int plntSysNum;
	int passCount = 0;
	int cx, cy, r;
	double d1, d2;
	for (int i = 0; i < testCaseNum; i++) {
		scanf("%d %d %d %d", &start[0], &start[1], &arrival[0], &arrival[1]);
		scanf("%d", &plntSysNum);
		for (int j = 0; j < plntSysNum; j++) {
			scanf("%d %d %d", &cx, &cy, &r);
			// Escape for first point
			if ((cx - start[0]) * (cx - start[0]) + (cy - start[1]) * (cy - start[1]) < (r * r)) {
				if ((cx - arrival[0]) * (cx - arrival[0]) + (cy - arrival[1]) * (cy - arrival[1]) > (r * r))
					passCount++;
			}
			// Enter to second point
			if ((cx - start[0]) * (cx - start[0]) + (cy - start[1]) * (cy - start[1]) > (r * r)) {
				if ((cx - arrival[0]) * (cx - arrival[0]) + (cy - arrival[1]) * (cy - arrival[1]) < (r * r))
					passCount++;
			}
		}

		printf("%d\n", passCount);
		passCount = 0;
	}

	return 0;
}