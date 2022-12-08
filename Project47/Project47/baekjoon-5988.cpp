//baekjoon-5988
//홀수일까 짝수일까

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//10^60은 long long 함수로도 불가능 하기 떄문에 char형을 이용하여 푼다.
//배열의 마지막값을 찾은 뒤 2로 나누어 홀수인지 짝수인지 판별한다.

int main(void) {

    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char num[60] = { 0, };

        scanf("%s", &num);

        int len = 0;
        len = strlen(num);

        //배열의 마지막값만 확인하면 됨
        if (num[len - 1] % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}