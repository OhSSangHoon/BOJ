//boj-1735
//�м� ��

//ù° �ٰ� ��° �ٿ�, �� �м��� ���ڿ� �и� ���ϴ� �ΰ��� �ڿ����� ������� �־�����.
// 2(����) 7(�и�)
// 3(����) 5(�и�)

//���м� : �и�� ���ڰ� 1�̿ܿ��� ������� ���� �м�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ŭ���� ȣ���� �˰���
int gcd(int x, int y) {
    int z = 1;
    while (y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int main(void) {
    int a, b, c, d;
    int temp = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //�и��� ���� ����Ͽ� ���� ���Ѵ�.
    //31 / 35
    int n = (a * d) + (c * b);
    int m = d * b;


    //�� �� ���ڿ� �и��� �ִ������� ��Ŭ���� ȣ������ ����Ͽ� ���ϰ� ���ڿ� �и� �ִ������� ������ �ش�.
    int min = gcd(n, m);

    n /= min;
    m /= min;

    printf("%d %d %d", min, n, m);

    return 0;
}