//boj-2908
//���


//�迭�� ���� �Է¹޴´�
//ó�� �ڸ��� ���ڸ��� �ٲٰ� ���������� ��½�Ų��
//a�� b�� �� ū ���� ��½�Ų��.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    char a[4], b[4];
    char temp;

    scanf("%s %s", a, b);

    int len = strlen(a);

    for (int i = 0; i < len / 2; i++) {

        temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;

        temp = b[i];
        b[i] = b[len - i - 1];
        b[len - i - 1] = temp;
    }

    int n = atoi(a);
    int m = atoi(b);


    if (n > m) {
        printf("%d", n);
    }
    else if (n < m) {
        printf("%d", m);
    }

    return 0;
}