// baekjoon-9076
//���� ����

// 5���� ������ �Է¹޾� �������� �ְ����� ������ �� ������ 3�� ������ �ְ�����
// �������� ���̰� 4�� �̻� ���̰� ���� �Ǹ� ���� ���� KIN�� ����Ѵ�

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