// boj-10539
// �����̿� ����
// ����b�� ����a�� ��հ��̴�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t = 0, temp = 0;

    scanf("%d", &t);

    int* a = (int*)malloc(sizeof(int) * t);

    for (int i = 1; i <= t; i++) {
        int b = 0;
        scanf("%d", &b);
        //b = a / i
        a[i] = b * i;

        printf("%d ", a[i] - a[i - 1]);
        b++;

    }
    return 0;
}