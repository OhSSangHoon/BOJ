//baekjoon-11006
//�������� ����

//�׽�Ʈ ���̽�(for�� ���� Ƚ��)T�� ���� ���� ��� ���� �ٸ����� �� N , ���� �� M�� ������ �������� �Է�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t = 0, n = 0, m = 0, u = 0, c = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);//���� �ٸ���, ���� ��

        u = m * 2 - n;//�ٸ��� �߸� ���� ��
        c = m - u;//������ ���� ��

        printf("%d %d", u, c);
        printf("\n");
    }
    return 0;
}