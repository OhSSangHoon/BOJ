//boj-20361
//�Ͽ�� �߹�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//�迭�� ����ϴϱ� assertionfailed������ �߻��ϱ淡 �迭�� ������� �ʰ� �ٸ��� Ǯ����.
int main(void) {
    int n, x, k;
    int a, b;

    scanf("%d %d %d", &n, &x, &k);

    for (int i = 0; i < k; i++) {
        scanf("%d %d", &a, &b);

        if (a == x) { //a�� x�� ���ٸ�
            x = b; //x�� B�� �ٲٴ� �� �̹Ƿ� x=b
        }
        else if (b == x) {
            x = a;
        }
    }

    printf("%d", x);

    return 0;
}