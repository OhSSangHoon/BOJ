//baekjoon-5988
//Ȧ���ϱ� ¦���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//10^60�� long long �Լ��ε� �Ұ��� �ϱ� ������ char���� �̿��Ͽ� Ǭ��.
//�迭�� ���������� ã�� �� 2�� ������ Ȧ������ ¦������ �Ǻ��Ѵ�.

int main(void) {

    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char num[60] = { 0, };

        scanf("%s", &num);

        int len = 0;
        len = strlen(num);

        //�迭�� ���������� Ȯ���ϸ� ��
        if (num[len - 1] % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}