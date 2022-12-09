//boj-1233
//�ֻ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���� ���� ���� ���� ���� ���

int main(void) {
	int a, b, c;
	int max = 0, g = 0;

	scanf("%d %d %d", &a, &b, &c);

	int* s1 = (int*)malloc(sizeof(int) * a);
	int* s2 = (int*)malloc(sizeof(int) * b);
	int* s3 = (int*)malloc(sizeof(int) * c);

	g = a + b + c;

	int* sum = (int*)malloc(sizeof(int) * g);
	
	for (int i = 0; i < g; i++) {
		sum[i] = 0;
	}

	for (int i = 1; i <= a; i++) {
		s1[i] = i;
	}
	for (int i = 1; i <= b; i++) {
		s2[i] = i;
	}
	for (int i = 1; i <= c; i++) {
		s3[i] = i;
	}

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				//�� �ֻ����� ���� sum�迭�� �ִ´�.
				sum[s1[i] + s2[j] + s3[k]]++;
			}
		}
	}
	int answer = 0;

	//3���� �ֻ��� ���� �ּҰ��� 3�̱� ������ 3���� �ݺ��� ����
	for (int i = 3; i < g; i++) {
		if (sum[i] > max) {
			max = sum[i];
			answer = i;
		}
	}

	printf("%d", answer);

	return 0;
}