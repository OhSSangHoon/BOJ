//baekjoon-4880
//���� ��

//���������� �������� ���ϴ� ����
//���������̸� AP�� ���� �� ��� / �������̸� GP�� ���� �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int ap=0, gp=0;

	while (1) {
		int a1, a2, a3;

		scanf("%d %d %d", &a1, &a2, &a3);

		//a1 a2 a3�� ���� 0�̶�� break;
		if (a1, a2, a3 == 0)
			break;

		//��������
		if (a2 - a1 == a3 - a2) {
			ap = a3 - a2;
			printf("AP %d\n", ap+a3);
		}
		else {//������
			gp = a3 / a2;
			printf("GP %d\n", gp * a3);
		}
	}
	return 0;
}