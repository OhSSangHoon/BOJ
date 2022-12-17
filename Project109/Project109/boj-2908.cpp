//boj-2908
//상수


//배열에 수를 입력받는다
//처음 자리와 끝자리만 바꾸고 정수형으로 출력시킨다
//a와 b중 더 큰 수를 출력시킨다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    char a[4], b[4];
    char temp;

    scanf("%s %s", a, b);

    int len = strlen(a);

    for (int i = 0; i < len / 2; i++) {

        temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;

        temp = b[i];
        b[i] = b[len - i - 1];
        b[len - i - 1] = temp;
    }

    int n = atoi(a);
    int m = atoi(b);


    if (n > m) {
        printf("%d", n);
    }
    else if (n < m) {
        printf("%d", m);
    }

    return 0;
}