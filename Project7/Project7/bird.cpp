//baekjoon-1568
//새


//k를 1씩 증가시키며 n마리에서 뺴준다
//k가 n보다 크다면 k를 다시 1로 초기화 시킨다.
//결과값이 0이 나온다면 반복문 종료
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n = 0, k = 0, time = 0; //새n , 노래k, 모든 새가 날아가기까지 총 시간 time

    scanf("%d", &n);

    while (1) {
        k++;

        //n이 0이라면 반복문 탈출
        if (n == 0)
            break;

        //새의 수가 노래보다 작다면
        if (n < k)
            k = 1; //1로 초기화, 다시 시작
        n -= k; //증가하는 k - n

        time++; //총시간 값 증가
    }
    printf("%d", time);
    return 0;
}

/*
*   ex) 14
*
/ / /
1 1 1 1 1 1 1 x x x x x x x  - 3

/
1 1 1 x - 1

/
1 1 x - 1

/
1 x -1

/
x - 1

14마리의 새가 있을 때 모든 새가 날아가기 까지의 총 시간은 7초

*/