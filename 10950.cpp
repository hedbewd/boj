#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int Case[100] = { 0, };
    int caseNum;
    scanf("%d", &caseNum);

    int num1, num2;
    for (int i = 0; i < caseNum; i++) {
        scanf("%d %d", &num1, &num2);
        Case[i] = num1 + num2;
    }
    for (int i = 0; i < caseNum; i++) {
        printf("%d\n", Case[i]);
    }

    return 0;
}