#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int number;
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        if (number < x) {
            printf("%d ", number);
        }
    }

    return 0;
}