//boj-25191
//ġŲ �Ѹ����� ������ �ݵ�� ���� �ִ� �ݶ� 2���� ���� 1���� ���� �Ծ�� �Ѵ�.
//ġŲ���� �ִ� ġŲ�� �������� ġŲ�� ���� ���Ѹ��� ���� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, a, b;
    int chi = 0;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    chi = (a / 2) + b;

    if (chi > n) {
        chi = n;
    }

    printf("%d\n", chi);
}