#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int N, var;
    int count = 0, num = 0;
    scanf("%d", &N);
    num = N;

    do {
        if (num < 10) {
            var = num * 10;
        }

        var = (num / 10) + (num % 10);
        num = ((num % 10) * 10) + (var % 10);
        count++;
    } while (num != N);

    printf("%d", count);

    return 0;
}