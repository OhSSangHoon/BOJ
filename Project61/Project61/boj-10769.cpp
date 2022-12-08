//baekjoon-10769
//행복한지 슬픈지

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main(void) {
    char arr[257];
    int len = 0;
    int happy = 0, sad = 0;

    scanf("%[^\n]s", arr);

    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        if (arr[i] == ':' && arr[i + 1] == '-' && arr[i + 2] == ')') {
            happy++;
        }
        else if (arr[i] == ':' && arr[i + 1] == '-' && arr[i + 2] == '(') {
            sad++;
        }
    }
    if (happy != 0 || sad != 0) {
        if (happy > sad) {
            printf("happy\n");
        }
        else if (happy < sad) {
            printf("sad\n");
        }
        else if (happy == sad) {
            printf("unsure\n");
        }
    }
    else {
        printf("none\n");
    }
    return 0;
}