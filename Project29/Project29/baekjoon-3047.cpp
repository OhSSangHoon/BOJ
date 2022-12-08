//baekjoon-3047번
//ABC


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//세 수 A,B,C가 있다. A < B, B < C이다.
//입력에서 주어진 순서대로 출력하는 프로그램을 작성하시오.

int main(void) {
    int a, b, c, max = 0;
    char arr[4];

    scanf("%d %d %d", &a, &b, &c);


    //입력한 a b c를 오름차순 정렬한다.
    for (int i = 0; i < 3; i++) {
        if (a > b) {
            max = a;
            a = b;
            b = max;
        }
        else if (b > c) {
            max = b;
            b = c;
            c = max;
        }
    }
    //"ABC"입력
    scanf("%s", arr);

    for (int i = 0; i < 3; i++) {
        if (arr[i] == 'A') {//A가 나왔으면 그 자리에 a출력
            printf("%d ", a);
        }if (arr[i] == 'B') {//B가 나왔으면 b출력
            printf("%d ", b);
        }if (arr[i] == 'C') {//C가 나왔으면 c출력
            printf("%d ", c);
        }
    }


    return 0;
}