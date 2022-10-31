#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <cstring>

int testCaseNum, buildingNum, rulesNum, buildToWin;
int buildTime[1001];
int dp[1001];
int pre[1001][1001];

int calculate(int x)
{
	if (dp[x] >= 0) return dp[x];
	int max = 0;
	int time;
	for (int i = 1; i <= buildingNum; ++i)
	{
		if (pre[i][x] == 1)
		{
			if (dp[i] >= 0) time = dp[i];
			else time = calculate(i);

			if (time > max) max = time;
		}
	}
	return dp[x] = max + buildTime[x];
}

int main()
{
	scanf("%d", &testCaseNum);
	while (testCaseNum--)
	{
		scanf("%d %d", &buildingNum, &rulesNum);

		memset(buildTime, 0, sizeof(buildTime));
		memset(dp, -1, sizeof(dp));
		memset(pre, 0, sizeof(pre));

		for (int i = 1; i <= buildingNum; i++)
			scanf("%d", &buildTime[i]);


		int X, Y;
		for (int i = 1; i <= rulesNum; i++) {
			scanf("%d %d", &X, &Y);
			pre[X][Y] = 1;
		}

		scanf("%ld", &buildToWin);
		printf("%d\n", calculate(buildToWin));
	}

	return 0;
}