#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ������� ���ĺ� �빮��, ����, ���(-)�θ� �̷���� �ִ�.
//FBI�� ø������ 'FBI'�� �ʼ��� ���ִ�.


int main(void) {
    char agent[5][11]; //������� �ִ� 10����
    int fbi[5] = { 0, }, cnt = 0, len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", agent[i]);

        len = strlen(agent[i]);

        for (int j = 0; j < len; j++) {
            //����� ���� FBI�� �������� ���ԵǾ��ִ��� Ȯ��
            if (agent[i][j] == 'F' && agent[i][j + 1] == 'B' && agent[i][j + 2] == 'I') {
                fbi[i] = i + 1; //�迭�� ������ 0�� ���� �ʰ� �ϱ� ���� +1�� ���ش�.
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (fbi[i] != 0) {
            printf("%d ", fbi[i]);
            cnt++; //FBI����� �ִ��� ������ Ȯ�� ���ֵ���
        }
    }

    if (cnt == 0) {
        printf("HE GOT AWAY!");
    }
    return 0;
}