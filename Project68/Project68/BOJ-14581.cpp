//boj-14581
//���۽�Ÿ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char hong[21];

    scanf("%s", hong);

    int len = 0;
    len = strlen(hong);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) { //[1][1]��° �迭��
                printf(":");
                printf("%s", hong); //hong ���
                printf(":");
            }
            else {
                printf(":fan:"); //������ fan���
            }
        }
        printf("\n");
    }

    return 0;
}