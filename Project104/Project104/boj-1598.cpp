//boj-1598
//������ ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�迭�� ������ ���� ��ǥ�� ã�� ���Ͽ���
//x ���� 4�� ���� y���� 1�� ���� �Ѵ�.
//x ���� (a - 1) / 4 
//y ���� (a - 1) % 4 �� ���� �� �ִ�.

int main(void) {
	int a, b;
	int ax, bx; //x��ǥ
	int ay, by; //y��ǥ

	scanf("%d %d", &a, &b);

	ax = (a - 1) / 4;
	bx = (b - 1) / 4;

	//printf("%d %d", ax, bx);

	ay = (a - 1) % 4;
	by = (b - 1) % 4;

	//printf("%d %d", ay, by);

	//x��ǥ�� ���� y��ǥ�� ���� ���ϸ� ���� �Ÿ��� ���´�
	//���� ���� �� a��ǥ�� ���� b��ǥ�� ������ ���� �� �����Ƿ� ���밪 �Լ�abs�� ����Ѵ�
	int sum = abs(ax - bx) + abs(ay - by);

	printf("%d", sum);

	return 0;
}