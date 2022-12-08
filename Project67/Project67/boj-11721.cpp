//boj-11721
//열 개씩 끊어 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[100];
    int len = 0;

    scanf("%s", arr);

    len = strlen(arr);

    printf("%c", arr[0]); //첫번째 배열은 무조건 출력하도록

    for (int i = 1; i < len; i++) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("%c", arr[i]);
    }

    return 0;
}