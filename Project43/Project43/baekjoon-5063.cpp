//baekjoon-5063
//TGN

//r�� ���� ���� �ʾ��� �� ����, e�� ���� ���� ���� ����, c�� ���� ���
// 
//e - (r+c)�� �ؼ� ����� ������ advertise 0�� ������ does not matter ������ ������ do not advertise �� ��½�Ų��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n = 0;//test case
    int r = 0, e = 0, c = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int ad = 0;

        scanf("%d %d %d", &r, &e, &c);

        ad = e - (r + c);

        if (ad > 0) {
            printf("advertise\n");
        }
        else if (ad == 0) {
            printf("dose not matter\n");
        }
        else if (ad < 0) {
            printf("do not advertise\n");
        }
    }
    return 0;
}