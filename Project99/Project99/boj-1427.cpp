//boj-1427
//��Ʈ�λ��̵�

//�迭 �������� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char arr[10];
	int temp = 0;

	scanf("%s", arr);

	int len = strlen(arr);

	int* n = (int*)malloc(sizeof(int) * len);


	for (int i = 0; i < len; i++) {
		n[i] = arr[i]-'0';
	}

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			//���� �ڵ�(n[j] <= n[j+1)
			//j+1�� �迭n�� �ε��� ������ �ʰ��ؼ� len���� �����Ѵ�
			//������ �ʰ��ϸ� �����Ⱚ�� ���������� ���Ŀ� ���Ե� �� �ֱ� ������
			//j+1 ���� len ���� �۴ٰ� ���� �ؾ��Ѵ�
			if (j+1 < len && n[j] <= n[j+1]) {
				temp = n[j + 1];
				n[j + 1] = n[j];
				n[j] = temp;
			}
		}
	}


	for (int i = 0; i < len; i++) {
		printf("%d", n[i]);
	}

	return 0;
}