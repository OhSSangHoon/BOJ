//boj-16199
//���̰���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int bir[4]; //���� �� ��
	int day[4]; //���� ��¥
	int a=0, b=0, c = 0;//�� ����, ���� ����, �� ����

	scanf("%d %d %d", &bir[0], &bir[1], &bir[2]);
	scanf("%d %d %d", &day[0], &day[1], &day[2]);


	//�⵵�� ���� ��
	if (bir[0] == day[0]) {
		a = day[0] - bir[0];
		c = a;
		for (int i = bir[0]; i <= day[0]; i++) {
			b++;
		}
	}
	if (bir[0] < day[0]) {
		for (int i = bir[0]; i <= day[0]; i++) {
			b++;
		}
		//�� ����
		if (bir[1] > day[1] || (bir[1] == day[1] && bir[2] > day[2])) {
			c = day[0] - bir[0];
			a = c - 1;
		}
		//����
		else if (bir[1] < day[1] || (bir[1] == day[1] && bir[2] <= day[2])) {
			c = day[0] - bir[0];
			a = c;
		}
	}
	


	printf("%d\n%d\n%d", a, b, c);//�� ����, ���� ����, �� ����
}