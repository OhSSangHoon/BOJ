//boj-11721
//�� ���� ���� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[100];
    int len = 0;

    scanf("%s", arr);

    len = strlen(arr);

    printf("%c", arr[0]); //ù��° �迭�� ������ ����ϵ���

    for (int i = 1; i < len; i++) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("%c", arr[i]);
    }

    return 0;
}