//baekjoon-5032
//ź�� ����

// �� ���� Ư�� ������ŭ ��������, �� ������ �ٲپ��ش�.
// �Է¿� ������ �ִ� �� ���� �� e, �׳� �߰��� �� ���� �� f,
// �� ������ �ٲٴµ� �ʿ��� �� ���� ���� c


//9 0 3 = 3�� 3 0 3 = 1�� �� 4��
//5 5 2 = 5�� 5 0 2 = 2�� 4 0 2 = 2�� �� 9��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int e = 0, f = 0, c = 0;
	int total = 0;

	scanf("%d %d %d", &e, &f, &c);

	int drink = e + f;
	
	while(drink >= c){ //drink�� ���� c�� ������ break;

		total += drink / c; //total�� drink���� c�� ���� ���� ���� ���� ���Ѵ�
		 
		drink = (drink / c) + (drink % c); //drink�� ���� ������ + �������� ���� �ٲ۴�
	}

	printf("%d\n", total);
}