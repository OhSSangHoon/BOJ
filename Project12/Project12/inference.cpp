//baekjoon-1731
//�߷�

//������������ ���������� ���ߴ� ����
//
// 1. ���� n�� �Է��Ѵ�. n[2] - n[1] �� n[3] - n[2]�� ���� ������ ��
// ���ٸ�, ���������� ���� �� �� ��ŭ n[i]������ ���� ++ �� ���
// 2. 1���� �����ؼ� �����ʴٸ� �̹��� �������� �־ ������ �������ٸ�
// 0 ���� ������ �������� �� ��ŭ n[i]������ ���� * �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int num = 0;
    long long sum = 0;
    long long mul = 0;
    long long value = 0;
    long long search[50];

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%lld", &search[i]);

        //������
        if (search[1] - search[0] == search[2] - search[1]) {
            sum = search[1] - search[0];
            value = search[i] + sum;
        }
        //��������
        else {
            mul = search[1] / search[0];
            value = search[i] * mul;
        }
    }
    /* �迭�� �� ������ Ȯ�� �ϱ� ���� �ڵ�
    for(int i =0; i < num; i++){
       printf("%lld\n", search[i]);
    }
    */

    printf("%lld", value);
    return 0;
}