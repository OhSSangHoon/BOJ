//boj-2145
//���� ����


//n �� 99999������ ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�� �ڸ����� �� 
int nanum(int x) {
	int sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(void) {
	int n;

	while(1){
		scanf("%d", &n);

		if (n == 0)
			break;

		//n�� 9 ���� ũ�ٸ� nanum�Լ��� ��� �����Ų��
		while (n > 9) {
			//n = sum�� ���� ��ȯ
			n = nanum(n);
		}
		printf("%d\n", n);
	}

	return 0;
}