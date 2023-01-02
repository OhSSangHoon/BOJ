//boj-1964
//������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, pentagon;
	long long sum = 2, ssum=2;

	scanf("%lld", &n);

	//2���ٰ� 3�� ���Ѱ��� ���������� ���� �� ��Ų��.
	//n == 2 �϶�  2 / 2���
	//n == 3 �϶� 3�� 1�� ���� �ֱ� ������ sum = 5 ssum = 2 + 5 �� �Ǳ⶧����
	//5 / 7 ���
	if(n >= 2){
		for (int i = 3; i <= n; i++) {
			sum += 3;
			ssum += sum;
		}
	}
	else if (n == 1) {
		sum = 0;
		ssum = 0;
	}

	pentagon = (n * 5) + ssum;

	//45678�� ������ �ȳ����� ���� ������ �� �������� �𸣰ڴ�.
	pentagon %= 45678;
	

	printf("%lld", pentagon);

	return 0;
}