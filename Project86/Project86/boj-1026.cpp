//boj-1026
//º¸¹°

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0, sum = 0, temp = 0, min = 101;

    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    int* b = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (b[i] < b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    printf("%d\n", sum);

    return 0;
}