//baekjoon-2476
//�ֻ��� ����


//1. ���� ���� 3���� ������ 10,000 + (���� ���� ��) * 1,000  ex) 6 6 6 �̸�, 10,000 + 6,000
//2. ���� ���� 2���� ������ 1,000 + (���� ���� ��) * 100
//3. ��� �ٸ� ���� ������ ��� (���� ū ��) * 100


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    int sum = 0;
    int a = 0, b = 0, c = 0;//�ֻ��� a ,b , c
    int max = 0, max1 = 0; //���� ū �ֻ����� �� max , ���� ���� ��� max1

    scanf("%d", &num);//�ֻ����� ���� Ƚ�� �Է�

    for (int i = 0; i < num; i++) {
        scanf("%d %d %d", &a, &b, &c);//�ֻ��� ���� �� �Է�

        if (a == b && b == c) { //a b c�� ���� ��
            sum = 10000 + (a * 1000);
        }
        else if (a == b) { //a b�� ���� ��
            sum = 1000 + (b * 100);
        }
        else if (a == c) { //a c�� ���� ��
            sum = 1000 + (c * 100);
        }
        else if (b == c) { //b c�� ���� ��
            sum = 1000 + (c * 100);
        }

        if (a != b && b != c && a != c) { //a b c�� ���� �ٸ� ��
            if (a > b && a > c) {
                max = a; //max �� a���� ����
            }
            else if (b > a && b > c) {
                max = b; //b���� ����
            }
            else if (c > b && c > a) {
                max = c; //c���� ����
            }
            sum = max * 100; //sum = ����ū �� * 100
        }
        if (sum > max1) { //���� ū ��� ���ϱ� sum�� max1���� Ŭ ��
            max1 = sum; //max1�� ���� ū ��ݰ� ����
        }
    }
    printf("%d\n", max1);

    return 0;
}