//baekjoon-4447
//������ ���۳�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//for������ �Է� �޾Ƽ� ���� ���� ��ŭ b�� g�� ���� Ȯ��
//b�� g�� ���� Ȯ���� �� b�� ���ٸ� �Ǵ�, g�� ���ٸ� �����, ���� ������ ���ٸ� �߸�

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
        b = g = 0; //b�� g�� �ٽ� 0���� �ʱ�ȭ ��Ų��.
    }
    return 0;
}