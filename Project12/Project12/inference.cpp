//baekjoon-1731
//추론

//등차수열인지 등비수열인지 맞추는 문제
//
// 1. 값을 n번 입력한다. n[2] - n[1] 과 n[3] - n[2]의 값이 같은지 비교
// 같다면, 등차수열로 보고 그 값 만큼 n[i]마지막 수에 ++ 후 출력
// 2. 1번을 실행해서 같지않다면 이번엔 곱셈식을 넣어서 나누어 떨어진다면
// 0 으로 나누어 떨어지는 값 만큼 n[i]마지막 수에 * 후 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int num = 0;
    long long sum = 0;
    long long mul = 0;
    long long value = 0;
    long long search[50];

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%lld", &search[i]);

        //등비수열
        if (search[1] - search[0] == search[2] - search[1]) {
            sum = search[1] - search[0];
            value = search[i] + sum;
        }
        //등차수열
        else {
            mul = search[1] / search[0];
            value = search[i] * mul;
        }
    }
    /* 배열에 잘 들어갔는지 확인 하기 위한 코드
    for(int i =0; i < num; i++){
       printf("%lld\n", search[i]);
    }
    */

    printf("%lld", value);
    return 0;
}