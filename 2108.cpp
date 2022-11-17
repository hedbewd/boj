#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int mode_arr[500000][2];
int second_mode[500000];

int main()
{
    int N;
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    // Average
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    int average = round((double)sum / N);
    cout << average << endl;

    // Median Value (heap sort)
    for (int i = 1; i < N; i++) {
        int c = i;
        do {
            int root = (c - 1) / 2;
            if (arr[root] < arr[c]) {
                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }
            c = root;
        } while (c != 0);
    }

    for (int i = N - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        int root = 0;
        int c = 1;
        do {
            c = root * 2 + 1;
            if (c < i - 1 && arr[c] < arr[c + 1]) {
                c++;
            }
            if (c < i && arr[root] < arr[c]) {
                temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }
            root = c;
        } while (c < i);
    }
    printf("%d\n", arr[N / 2]);

    // Mode
    int mode_arr_length = 1;
    mode_arr[0][0] = arr[0];
    mode_arr[0][1] = 1;
    for (int i = 1, j = 0; i < N; i++) {
        if (arr[i - 1] != arr[i]) {
            j++;
            mode_arr_length++;
        }
        mode_arr[j][0] = arr[i];
        mode_arr[j][1]++;
    }
    int mode_max_cnt = 0, mode_max_temp = 0;
    for (int i = 0; i < N; i++) {
        if (mode_max_cnt < mode_arr[i][1]) {
            mode_max_cnt = mode_arr[i][1];
            mode_max_temp = mode_arr[i][0];
        }
    }
    int flag = 0;
    for (int i = 0, j = 0; i < mode_arr_length; i++)
    {
        if (mode_arr[i][1] == mode_max_cnt) {
            flag++;
            second_mode[j] = mode_arr[i][0];
            j++;
        }
    }
    if (flag > 1) {
        printf("%d\n", second_mode[1]);
    }
    else {
        printf("%d\n", mode_max_temp);
    }

    // Range
    printf("%d\n", arr[N - 1] - arr[0]);

    return 0;
}