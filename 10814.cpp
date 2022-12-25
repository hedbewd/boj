#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

typedef struct {
	int age;
	char name[101];
	int order;
}member;

int compare(const void* first, const void* second);

int main()
{
	int N;
	scanf("%d", &N);

	member* list;
	list = (member*)malloc(N * sizeof(member));

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &list[i].age, list[i].name);
		list[i].order = i;
	}

	qsort(list, N, sizeof(list[0]), compare);

	for (int i = 0; i < N; i++) {
		printf("%d %s\n", list[i].age, list[i].name);
	}

	return 0;
}

int compare(const void* first, const void* second)
{
	member* a = (member*)first;
	member* b = (member*)second;

	if (a->age < b->age) {
		return -1;
	}
	else if (a->age > b->age) {
		return 1;
	}
	else {
		if (a->order < b->order) {
			return -1;
		}
		else {
			return 1;
		}
	}

	return 0;
}