//baekjoon-1834
//�������� ���� ���� ��


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ģ
//n = 1�� �� 0
//n = 2�� �� 3(0, 3)
//n = 3�� �� 12(4, 8)
//n = 4�� �� 30(5, 10, 15)...


//int�� �� long���� 4byte�� �����ϱ⶧����
//long long���� ����ߴ�

int main(void) {
	long long num = 0;
	long long sum = 0;

	scanf("%lld", &num);

	for (int i = 0; i < num; i++) {
		
		sum += (num + 1) * i;
	}

	printf("%lld", sum);
	return 0;
}