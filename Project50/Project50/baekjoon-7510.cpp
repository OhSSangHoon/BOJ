//baekjoon-7510
//��޼���

//���� �ﰢ������ �ƴ��� ���ض�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int t = 0;
    int temp = 0;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {

        int a = 0, b = 0, c = 0;
        int max = 0;

        scanf("%d %d %d", &a, &b, &c);

        //a�� b���� Ŭ ���
        //b�� a�� ���� ����
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        //a�� c���� Ŭ ���
        //c�� a�� ���� ���� / ū ���� c�� �����ش� 
        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }
        //b�� c���� Ŭ ���
        //b�� c�� ���� ���� / ū ���� c�� �����ش�
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        printf("Scenario #%d:\n", i);
        printf("%s\n\n", a * a + b * b == c * c ? "yes" : "no"); //���� �����ڸ� ��� yes / no ���
    }
    return 0;
}