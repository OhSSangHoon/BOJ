//baekjoon-3040
//�鼳���ֿ� �ϰ�������

//������ �� 9���� �Է� ��� ���Ѵ�. 
//�ű⼭ ������ �� 2���� �� 100�� �ǵ��� �Ѵ�.

//100�� �ȴٸ� �ش� 2���� ���� ������ ������ �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[9], sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);

        sum += arr[i]; //�����̵��� ��� ��
    }


    for (int i = 0; i < 9; i++) { //arr[0]..arr[8]���� 
        for (int j = i+1; j < 9; j++) {//arr[i+1]
            if (sum - (arr[i] + arr[j]) == 100) { //sum - arr[i] + [j]�� ���� 100�� �ȴٸ�
                printf("��¥ ������: ");
                for (int k = 0; k < 9; k++) {
                    
                    if (k != i && k != j) { //arr[k]�� i�� j�� ���� ���ٸ�
                        printf("%d ", arr[k]);//���
                    }
                }
                printf("\n��¥ ������: %d %d ", arr[i], arr[j]);
                return 0;
            }
        }
    }
}