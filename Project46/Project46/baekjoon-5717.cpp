//baekjoon-5717
//������� ģ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    while (1) {
        int m = 0, f = 0, sum = 0;;

        scanf("%d %d", &m, &f);

        if (m, f == '\0')
            break;

        sum = m + f;

        printf("%d\n", sum);

    }
    return 0;
}