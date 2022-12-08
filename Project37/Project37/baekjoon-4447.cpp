//baekjoon-4447
//좋은놈 나쁜놈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//for문으로 입력 받아서 글자 길이 만큼 b와 g의 갯수 확인
//b와 g의 갯수 확인한 후 b가 많다면 악당, g가 많다면 히어로, 둘의 갯수가 같다면 중립

int main(void) {
    int n = 0, b = 0, g = 0;
    char hero[26];

    scanf("%d", &n);



    for (int i = 0; i < n; i++) {
        getchar() != '\n';
        scanf("%[^\n]s", hero);

        int len = strlen(hero);

        for (int j = 0; j < len; j++) {
            if (hero[j] == 'b' || hero[j] == 'B') {
                b++;
            }
            if (hero[j] == 'g' || hero[j] == 'G') {
                g++;
            }
        }
        if (b > g) {
            printf("%s is A BADDY\n", hero);
        }
        if (g > b) {
            printf("%s is GOOD\n", hero);
        }
        if (g == b) {
            printf("%s is NEUTRAL\n", hero);
        }
        b = g = 0; //b와 g를 다시 0으로 초기화 시킨다.
    }
    return 0;
}