//baekjoon-3035
//��ĳ��


//R*ZR�� �ٿ� ���ļ� C*ZC�� ���ھ� �ٷ��Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int R, ZR, C, ZC;
    char scanner[51][51];

    scanf("%d %d %d %d", &R, &C, &ZR, &ZC);

    for (int i = 0; i < R; i++) {
        scanf("%s", scanner[i]);
    }

    for (int i = 0; i < R; i++) {
        for (int a = 0; a < ZR; a++, puts("")) { //�� R * ZR
            for (int j = 0; j < C; j++) {
                for (int b = 0; b < ZC; b++) { //�� C * ZC
                    printf("%c", scanner[i][j]);
                }
            }
        }
    }

    return 0;
}