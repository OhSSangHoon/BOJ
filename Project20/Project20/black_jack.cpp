//baekjoon-2798
//black jack

//ī����� n�� ��m�� �־�����
//�� �� ���� m�� ����������, m�� �ִ��� ����� ī�� 3�常 �Է����� �־�����
//�� �� ���� ����� ī�� 3���� ���� ����Ѵ�.

/*
   �迭 c�� n���� ī�带 �Է¹ް�
   3���� ��ø for������ ī��m�� ���� 3���� ī�� ����� ���� �˾Ƴ���.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
    int n = 0, m = 0, sum = 0, max = 0;
    int c[101];//ī��
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    //5 6 7 , 5 6 8 , 5 6 9 , 5 7 8 , 5 8 9 , 6 7 8 , 6 7 9 , 6 8 9 , 7 8 9 ������
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = c[i] + c[j] + c[k];
                //sum�� m���� �۰ų� ���� sum�� max���� ũ�ٸ�
                if (sum <= m && sum > max) {
                    max = sum;
                }
            }
        }

    }
    printf("%d", max);
    return 0;
}