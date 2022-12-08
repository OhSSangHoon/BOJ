//baekjoon-10811
//�ٱ��� ������

//���� ���� ū �� ���� �ڷ� ���°� �ƴ϶� i ���� j ������ ��� ���� ���� ��Ų��.

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
            i++; //i�� �����ϸ鼭 �ö󰡰�
            j--; //j�� ���ҽ�Ű�鼭 �����´�
        }
    }

    for (int l = 1; l <= n; l++) {
        printf("%d ", arr[l]);
    }

    return 0;
}