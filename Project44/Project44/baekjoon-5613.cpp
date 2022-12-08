//baekjoon-5613
//평균 중앙값 문제

//A,B를 입력한 뒤 평균과 중앙값을 같게 만드는 가장 작은 정수 C를 찾아라.

//c = (a * 2) - b

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;

    while (1) {

        scanf("%d %d", &a, &b);

        if (a == '\0' && b == '\0')//a와 b가 둘다 0이면 while문 탈출
            break;

        c = (a * 2) - b; //c는 a * 2 - b값이다.

        printf("%d\n", c);
    }
    return 0;
}