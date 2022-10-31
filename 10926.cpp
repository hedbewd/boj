#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char id[51] = { 0 };
	char surprised[4] = "??!";

	scanf("%s", id);
	printf("%s", strcat(id, surprised));

	return 0;
}