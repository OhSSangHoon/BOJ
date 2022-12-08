//baekjoon-2846
//오르막길

//n ... n + m 까지 오르막길 n + m 의 다음 수가 n + m 보다 작다면, 오르막길 끝.
//오르막길의 크기는 (n + m) - n
//12와 6 또한 오르막길 x

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int num = 0, mount[1024];
    int max = 0, min = 0, up = 0, height = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &mount[i]); //자전거 길 높이 입력
    }

    for (int i = 0; i < num; i++) {
        //오르막길이라면 최대높이에서 최소 높이를 뺀 값을 변수up에 더한다.
        if (mount[i] < mount[i + 1]) {
            min = mount[i];
            max = mount[i + 1];
            up += max - min;
            //ex) 1 4 6 이라면, 4-1 = 3(up에 저장) 6 - 4 = 2(up에 저장) up = 5

        }
        //오르막길이 아니라면 up 초기화
        else {
            up = 0;
        }
        //오르막길 중 가장 크기가 큰 오르막길
        if (height < up) {
            height = up;
        }
    }
    printf("%d", height);
    return 0;
}