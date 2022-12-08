//boj-25024
//�ð��� ��¥
//�ô� 0 ~ 23 �� 0 ~ 59
//�� 1 ~ 12 �� 1,3,5,7,8,10,12���� 31��
//4,6,9,1���� 30��  2���� 29�ϱ��� ��ȿ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t = 0, cnt = 0;
    int x, y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);

        //�ð�
        if (x <= 23) {
            if (y <= 59) {
                printf("Yes ");
            }
            else {
                printf("No ");
            }
        }
        else {
            printf("No ");
        }

        //��
        if (x > 0 && x <= 12) {
            switch (x) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:

                if (y > 0 && y <= 31)
                    printf("Yes ");
                else
                    printf("No ");
                break;

            case 4:
            case 6:
            case 9:
            case 11:

                if (y > 0 && y <= 30)
                    printf("Yes ");
                else
                    printf("No ");
                break;

            case 2:

                if (y > 0 && y <= 29)
                    printf("Yes ");
                else
                    printf("No ");
                break;
            default:
                printf("No ");
            }
        }
        else
            printf("No ");
        printf("\n");
    }
    return 0;
}