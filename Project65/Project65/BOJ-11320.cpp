//baekjoon-11320
//�ﰢ ����-1

//�ﰢ���� ���� ���Ѵ� ������ ��Ʈ3 / 2 * a ���� sqrt��
//����ϳ� ����� �ߴµ� ����ó�� �ڵ尡 �� ������ �ʾҴ�.


#include <stdio.h>
#include <math.h>

int main(void) {
    int t = 0, a = 0, b = 0;
    int count = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);

        count = (a * a) / (b * b);

        printf("%d\n", count);
    }

    return 0;
}