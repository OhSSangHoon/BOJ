//boj-1934
//�ּҰ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ּ� ������� ���ϴ� �� ���
//�� ���� �� / �ִ� ����� = �ּ� �����

int main(void) {
	int n, a, b, gcd;

	scanf("%d", &n);

	for(int j = 0; j < n; j++){
		scanf("%d %d", &a, &b);

		//i�� 10 && 5�� �ɶ����� ���� 
		for (int i = 1; i <= a && i <= b; i++) {
			//a �� b�� i�� ���������� �������� 0�̶��
			if (a % i == 0 && b % i == 0) {
				gcd = i;//i = �ִ� �����
			}
		}

		//�ּ� ����� = �� ���� �� / �ִ� �����
		int lcm = (a * b) / gcd;

		printf("%d\n", lcm);
	}

	return 0;
}