#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int submit_person;
	int total_submit_person[28] = { 0 };
	int submit_person_check[30] = { 0 };
	int not_submit_person[2] = { 0 };
	for (int i = 0; i < 28; i++) {
		scanf("%d", &submit_person);
		total_submit_person[i] = submit_person;
		submit_person_check[submit_person - 1] = 1;
	}
	for (int i = 0, j =0; i < 30; i++) {
		if (submit_person_check[i] == 0) {
			not_submit_person[j] = i + 1;
			j++;
		}
	}
	if (not_submit_person[0] > not_submit_person[1]) {
		printf("%d\n", not_submit_person[1]);
		printf("%d", not_submit_person[0]);
	}
	else {
		printf("%d\n", not_submit_person[0]);
		printf("%d", not_submit_person[1]);
	}

	return 0;
}