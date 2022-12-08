// baekjoon-9076
//점수 집계

// 5개의 점수를 입력받아 최저점과 최고점의 점수을 뺀 나머지 3명 점수의 최고점과
// 최저점의 차이가 4점 이상 차이가 나게 되면 점수 조정 KIN을 출력한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t = 0, temp = 0;
    int point[5] = { 0, };

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int max = 0, min = 10;
        int sum = 0;

        for (int j = 0; j < 5; j++) {
            scanf("%d", &point[j]);
        }

        for (int j = 0; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                if (point[j] > point[k]) {
                    temp = point[j];
                    point[j] = point[k];
                    point[k] = temp;
                }
            }
            sum += point[j];
        }
        if (point[3] - point[1] >= 4) {
            printf("KIN\n");
        }
        else {
            printf("%d\n", sum - (point[0] + point[4]));
        }
    }

    return 0;
}