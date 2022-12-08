//baekjoon-6359
//������ ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//n�� ���� �� �� ��, ������ �濡�� ���������� ���� ���⋚���� ���� �л��� �Ѹ� ���� �Ѵ�.

//n = 1 ~ 3 ... 1��
//n = 4 ~ 8 ... 2��
//n = 9 ~ 15 ... 3��
//n = 16 ~ 24 ... 4��
//n = 25 ~ 35 ... 5�� ...

//���� ������ �� �ִ� �л��� ���� n�� �������̴�.


int main(void) {
    int t = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int count = 0;
        int n = 0;

        scanf("%d", &n);

        int* room = (int*)malloc(sizeof(int) * n);//�����Ҵ�

        for (int j = 1; j <= n; j++) {
            //n�� j�������� ũ�ų� ���ٸ�
            if ((j * j) <= n) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}