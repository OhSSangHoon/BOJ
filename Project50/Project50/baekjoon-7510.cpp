//baekjoon-7510
//고급수학

//직각 삼각형인지 아닌지 구해라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int t = 0;
    int temp = 0;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {

        int a = 0, b = 0, c = 0;
        int max = 0;

        scanf("%d %d %d", &a, &b, &c);

        //a가 b보다 클 경우
        //b와 a의 값을 변경
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        //a가 c보다 클 경우
        //c와 a의 값을 변경 / 큰 수를 c로 보내준다 
        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }
        //b가 c보다 클 경우
        //b와 c의 값을 변경 / 큰 수를 c로 보내준다
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        printf("Scenario #%d:\n", i);
        printf("%s\n\n", a * a + b * b == c * c ? "yes" : "no"); //조건 연산자를 사용 yes / no 출력
    }
    return 0;
}