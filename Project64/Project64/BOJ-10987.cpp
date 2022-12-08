//baekjoon-10987
//모음의 개수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[101] = { 0, };
    int len = 0, count = 0;

    scanf("%[^\n]s", arr);

    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        if ('a' <= arr[i] && arr[i] <= 'z') {
            if (arr[i] == 'a') {
                count++;
            }
            else if (arr[i] == 'e') {
                count++;
            }
            else if (arr[i] == 'i') {
                count++;
            }
            else if (arr[i] == 'o') {
                count++;
            }
            else if (arr[i] == 'u') {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}