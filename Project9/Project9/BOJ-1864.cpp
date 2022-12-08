//baekjoon-1864 
//문어 숫자

//규칙
//
//n개의 숫자를 입력하면
//식에는 8^n-1 .. 8^n .. 이런식으로 
//
//ex) (@& 를 입력했다
//그렇다면 2 * 8^3 + 3 * 8^2 + 6 * 8 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char num[8];

    while (scanf("%s", num) != '#') { //num반복 입력 #입력 시 탈출 
        if (num[0] == '#')
            break;

        int len = strlen(num);

        int i = 0, oct = 0, a;

        while (len != 0) { //len값이 0이 되면 탈출
            char str = num[i];
            switch (str) {
            case '-':
                a = 0;
                break;
            case '\\':
                a = 1;
                break;
            case '(':
                a = 2;
                break;
            case '@':
                a = 3;
                break;
            case '?':
                a = 4;
                break;
            case '>':
                a = 5;
                break;
            case '&':
                a = 6;
                break;
            case '%':
                a = 7;
                break;
            case '/':
                a = -1;
                break;
            default:
                break;
            }
            oct += a * pow(8, (len - 1)); //제곱을 구해주는 pow함수를 사용하여
            //변수oct에 입력값 a * 8^n승의 값을 계속 더해준다
            len--; //len은 감소
            i++; //i는 증가
        }
        printf("%d\n", oct);
    }

    return 0;
}