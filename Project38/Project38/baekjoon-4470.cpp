//baekjoon-4470
//�ٹ�ȣ


//n��ŭ �Է��� �� �տ� ��ȣ�� �ٿ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n = 0;
    char arr[50];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        getchar() != '\n';

        scanf("%[^\n]s", arr);

        printf("%d. %s\n", i, arr);
    }

    return 0;
}