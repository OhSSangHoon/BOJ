//boj-21567
//������ ����2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c;
	int n = 0;
	long long num = 1;
	int arr[10] = { 0, };

	scanf("%lld %lld %lld", &a, &b, &c);

	num = a * b * c;


	//num�� 0�� �� �� ���� �ݺ�
	while(num > 0) {
		n = num % 10; //�ڸ� ���� 1�� �ڸ� ���� �˱� ���� ������ ���� ����

		arr[n]++; //�ش� ���������� �迭[���� ��]�� ī��Ʈ ���ش�

		num /= 10; //�״��� �ڸ� ���� �˱� ���� / 10
	}
	
	//0���� 9���� ���
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	

	return 0;
}