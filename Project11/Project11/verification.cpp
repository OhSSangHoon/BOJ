//baekjoon-2475
//verification

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	long n;
	int sum=0, a = 0;

	for(int i =0; i < 5; i++){
		scanf("%ld", &n); //5���� �� �Է�
		sum += n * n; //�Է��� ���� ������ �� ���� �����ش�
		
	}

	a = sum % 10; //�������� ���ϱ� ���� sum % 10 

	printf("%d", a); //������ ���
	
} 