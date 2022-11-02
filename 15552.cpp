#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int caseNum;
    scanf("%d", &caseNum);

    int num1, num2;
    for (int i = 0; i < caseNum; i++) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
    }

    return 0;
}