//baekjoon-10811
//바구니 뒤집기

//작은 수가 큰 수 보다 뒤로 가는게 아니라 i 부터 j 사이의 모든 수를 연순 시킨다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0, m = 0;

    scanf("%d %d", &n, &m);

    int* arr = (int*)malloc(sizeof(int) * n + 1);

    for (int o = 1; o <= n; o++) {
        arr[o] = o;
    }

    for (int k = 0; k < m; k++) {
        int temp = 0, i = 0, j = 0;
        scanf("%d %d", &i, &j);

        for (int l = i; l <= j; l++) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++; //i는 증가하면서 올라가고
            j--; //j는 감소시키면서 내려온다
        }
    }

    for (int l = 1; l <= n; l++) {
        printf("%d ", arr[l]);
    }

    return 0;
}