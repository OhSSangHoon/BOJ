//baekjoon-2282
//점수 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int num[8], copy[8] = { 0, };
    int output[8] = { 0, };
    int max[5];
    int sum = 0, temp;


    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
        copy[i] = num[i];
    }

    //배열 큰 수 부터 오름차순 정렬
    for (int j = 0; j < 8; j++) {
        for (int k = 0; k < 7; k++) {
            if (num[k] < num[k + 1]) {
                temp = num[k + 1];
                num[k + 1] = num[k];
                num[k] = temp;
            }
        }
    }

    //큰 수 5개 합
    for (int i = 0; i < 5; i++) {
        sum += num[i];

        //큰 수 들의 배열 주소 저장
        for (int j = 0; j < 8; j++) {
            if (num[i] == copy[j]) {
                output[i] = j;
            }
        }
    }

    printf("%d\n", sum);

    //배열 오름차순 정리
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (output[j] > output[j + 1]) {
                temp = output[j];
                output[j] = output[j + 1];
                output[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", output[i] + 1);
    }

    return 0;
}