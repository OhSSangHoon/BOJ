//baekjoon-6359
//만취한 상범

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//n이 제곱 수 일 때, 마지막 방에서 최종적으로 문을 열기떄문에 도주 학생이 한명씩 증가 한다.

//n = 1 ~ 3 ... 1명
//n = 4 ~ 8 ... 2명
//n = 9 ~ 15 ... 3명
//n = 16 ~ 24 ... 4명
//n = 25 ~ 35 ... 5명 ...

//따라서 도주할 수 있는 학생의 수는 n의 제곱수이다.


int main(void) {
    int t = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int count = 0;
        int n = 0;

        scanf("%d", &n);

        int* room = (int*)malloc(sizeof(int) * n);//동적할당

        for (int j = 1; j <= n; j++) {
            //n이 j제곱보다 크거나 같다면
            if ((j * j) <= n) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}