//baekjoon-4493
//가위 바위 보


//R 은 S를 이긴다
//S 는 P를 이긴다
//P 는 R을 이긴다
//첫 번째 문자는 Player1, 두 번째 문자는 Player2


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t = 0, n = 0;


    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        int p1 = 0, p2 = 0;

        for (int j = 0; j < n; j++) {

            char player1[100], player2[100];

            //player1 ,player2 입력
            scanf("%s %s", &player1[j], &player2[j]);

            //가위 바위 보 룰 적용
            if (player1[j] == 'R' && player2[j] == 'S' || player1[j] == 'S' && player2[j] == 'P' || player1[j] == 'P' && player2[j] == 'R') {
                p1++;
            }
            if (player1[j] == 'R' && player2[j] == 'P' || player1[j] == 'S' && player2[j] == 'R' || player1[j] == 'P' && player2[j] == 'S') {
                p2++;
            }
            if (player1[j] == 'R' && player2[j] == 'R' || player1[j] == 'S' && player2[j] == 'S' || player1[j] == 'P' && player2[j] == 'P') {
                p1++;
                p2++;
            }
        }

        if (p1 > p2) {
            printf("Player 1\n");
        }
        if (p2 > p1) {
            printf("Player 2\n");
        }
        if (p1 == p2) {
            printf("TIE\n");
        }
    }
    return 0;
}