//baekjoon-2355
//�ñ׸�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    //���� ������ ũ�⋚���� int���� �ƴ� long long�� ������ ����
    long long a = 0, b = 0;
    long long sum = 0;

    scanf("%lld %lld", &a, &b);

    //���� b�� a���� ũ�ų� ���ٸ�
    if (b >= a) { //ex) a = 1 b = 2
        sum = ((a + b) * (b - a + 1) / 2); //3 * 1 = 3
    }
    else { //�ƴ� ��
        sum = ((b + a) * (a - b + 1) / 2); //a�� b�� ��ġ ����
    }
    printf("%lld", sum);
    return 0;
}