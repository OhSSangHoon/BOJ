//baekjoon-10101
//�ﰢ�� �ܿ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ ũ�Ⱑ ��� 60�̸�, Equilateral
//�� ���� ���� 180�̰�, �� ���� ���� ��쿡�� Isosceles
//���� ���� ���� ��쿡�� Scalene 180�� �ƴ� ��쿡�� Error

int main(void) {
	int a = 0, b = 0, c = 0;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;

	if (sum == 180) {
		//abc �� �� ���� 60
		if (a, b, c == 60) {
			printf("Equilateral");
		}
		//�ƴϸ� ab Ȥ�� ac Ȥ�� bc���� ������
		else if(a == b || a== c || b == c) { 
			printf("Isosceles");
		}
		//abc �� �� ���� �ٸ���
		if(a != b && a != c && b != c) {
			printf("Scalene");
		}
	}//sum�� ���� 180�� �ƴϸ�
	else if (sum != 180) {
		printf("Error\n");
	}
	return 0;
};