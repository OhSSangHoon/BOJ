//baekjoon-4493
//���� ���� ��


//R �� S�� �̱��
//S �� P�� �̱��
//P �� R�� �̱��
//ù ��° ���ڴ� Player1, �� ��° ���ڴ� Player2


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

            //player1 ,player2 �Է�
            scanf("%s %s", &player1[j], &player2[j]);

            //���� ���� �� �� ����
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