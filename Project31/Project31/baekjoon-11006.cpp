//baekjoon-11006
//남욱이의 닭장

//테스트 케이스(for문 실행 횟수)T와 매줄 마다 모든 닭의 다리수의 합 N , 닭의 수 M이 공백을 간격으로 입력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t = 0, n = 0, m = 0, u = 0, c = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);//닭의 다리수, 닭의 수

        u = m * 2 - n;//다리가 잘린 닭의 수
        c = m - u;//멀쩡한 닭의 수

        printf("%d %d", u, c);
        printf("\n");
    }
    return 0;
}