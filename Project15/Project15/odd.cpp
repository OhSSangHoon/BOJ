//baekjoon-2576
//odd

//7���� �ڿ����� �Է� �� Ȧ���� �ڿ������� ã�� �� ���� ���ϰ�,
//�� Ȧ�� �� �ּڰ��� ã�� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0, n = 0, odd = 0, sum = 0, min = 99;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num);
		
		n = num;
		//¦������ Ȧ������ Ȯ��
		if (n % 2 != 0) {
			//Ȧ��
			odd = n;
			sum += odd;

			if (odd < min) {
				min = odd;
			}
		}
	}
	if( sum != 0){
	//Ȧ���� ��
	printf("%d\n", sum);
	//Ȧ���� �ּҰ�
	printf("%d\n", min);
	}
	else {
		printf("-1");
	}
	
	
	return 0;
}