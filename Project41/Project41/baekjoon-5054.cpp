//baekjoon-5054
//������ ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ִ� �Ÿ��� �ִ� ���� ��ġ�� ���ϱ� ���� ��� ������ ����� ���Ѵ�
//����� ���� �� �ּ� ��ġ�� �ִ� ��ġ�� ����
//�ּ�,�ִ� ��ġ �� ������ġ�� ���� ���� *2�� ���ָ� ��

int main(void) {
	int t = 0;
	

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n = 0, store[20], average = 0, sum = 0;
		int min = 100, max = 0;
		int parking = 0;

		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
			scanf("%d", &store[j]);

			sum += store[j];

			average = sum / n;

			if (min > store[j]) {
				min = store[j];
			}
			
			if (max < store[j]) {
				max = store[j];
				
			}
			
		}

		min = average - min;//���� ��ġ�� �ּ� �������� �Ÿ�
		max = max - average;//���� ��ġ�� �ִ� �������� �Ÿ�
		
		parking = (min + max) * 2;//���� ��ġ

		printf("%d\n", parking);
	}
	return 0;
}