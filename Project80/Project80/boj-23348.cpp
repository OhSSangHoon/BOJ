//boj-23348
//스트릿 코딩 파이터

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    int x, y, z;
    int n = 0, t = 0, max = 0;

    scanf("%d %d %d", &a, &b, &c);

    scanf("%d", &n);

    int* sum = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        sum[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d %d %d", &x, &y, &z);
            sum[i] = sum[i] + (x * a) + (y * b) + (z * c);
        }

        if (sum[i] > max) {
            max = sum[i];
        }
    }
    printf("%d\n", max);
    return 0;
}