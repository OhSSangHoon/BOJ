//baekjoon-4504
//��� ã��

//ù° �ٿ�  Ȯ���� ���� n
//while�� ������ 0�Է��ϸ� �� 
//�Է��� ������ n�� ������� �ƴ� �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int n = 0;
	int a = 0;


	scanf("%d", &n);

	while (1) {

		scanf("%d", &a);

		if (a == 0)
			break;

		if (a % n == 0) {
			printf("%d is a multiple of %d.\n", a, n);
		}
		else if( a % n != 0) {
			printf("%d is NOT a multiple of %d.\n", a, n);
		}

		
	}
	return 0;
}