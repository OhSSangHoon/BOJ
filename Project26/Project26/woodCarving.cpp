//baekjoon-2947
//���� ����

//�迭�� ���� for�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[5] = { 0, }, temp = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        //arr[0] / arr[1] , arr[1] / arr[2] , arr[2] / arr[3] ... ��
        for (int j = 0; j < 4; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                //arr[0]���� arr[4]���� ���
                for (int k = 0; k < 5; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}