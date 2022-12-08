//baekjoon-2355
//시그마

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    //값의 범위가 크기떄문에 int형이 아닌 long long형 변수를 선언
    long long a = 0, b = 0;
    long long sum = 0;

    scanf("%lld %lld", &a, &b);

    //만약 b가 a보다 크거나 같다먼
    if (b >= a) { //ex) a = 1 b = 2
        sum = ((a + b) * (b - a + 1) / 2); //3 * 1 = 3
    }
    else { //아닐 시
        sum = ((b + a) * (a - b + 1) / 2); //a와 b의 위치 변경
    }
    printf("%lld", sum);
    return 0;
}