//boj-16435
//������ũ ����


//�ݺ����� ������ ���� ���̿� ���� ���� ������ + 1���߰� ���� ���� ���� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0, l=0; //������ ���� n , ����� ���� l
	int temp;

	scanf("%d %d", &n, &l);
	
	int* h = (int*)malloc(sizeof(int)* n); //������ ���� h

	for (int i = 0; i < n; i++) {
		scanf("%d", &h[i]);

	}

	//h[i]�� �������� ���� �Ѵ�
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (h[i] > h[j]) {
				temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}
		}
		//���� ���̰� ���̺��� ũ�ų� ���ٸ�
		if (l >= h[i]) {
			l++;//���������ش�
		}
	}
	printf("%d", l);

	return 0;
}