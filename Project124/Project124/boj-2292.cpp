//boj-2292
//����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
int main(void) {
	int n, i = 2, j = 5, cnt= 2;
	//j 2�� �� ���� �����ϱ� ������ 5���� 6�� ����
	//i �ش� ���� �ּҰ�

	scanf("%d", &n);

	if (n == 1) {
		cnt = 1;
		printf("%d", cnt);

		return 0;
	}
	
	while (1) {
		//i�� n���� �۰Ű� ����, i + j �� n���� ũ�ų� ���� ��
		//��� �� Ż��
		if (i <= n && i + j >= n) {
			printf("%d", cnt);
			break;
		}
		//�޼��ϱ� ������ �ݺ�

		//ex) 8������ ���°Ŷ��
		//i + j = 7�̱� ������ �ش� �Լ� ���� 2 += 5 + 1 = 8
		//5 += 6 = 11
		i += j + 1;
		j += 6;
		//������ ���� ����
		cnt++;
	}

}