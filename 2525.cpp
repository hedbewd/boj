#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int hour, minute, work_time, sum_work_time_minute, result_hour, result_minute, calculate_result_hour, calculate_result_minute;
	scanf("%d %d", &hour, &minute);
	scanf("%d", &work_time);
	sum_work_time_minute = work_time + minute;
	calculate_result_hour = sum_work_time_minute / 60;
	calculate_result_minute = sum_work_time_minute % 60;
	result_hour = hour + calculate_result_hour;
	if (result_hour >= 24) {
		result_hour -= 24;
	}
	printf("%d %d", result_hour, calculate_result_minute);

	return 0;
}