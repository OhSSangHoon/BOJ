//boj-1712
//���� �б���

//���� ���� A, ���� ���� B, ���� C�� �־����� ��
//C*n�� A + (B*n)�� �Ѿ�� ���� �б����� �߻��ϴ� ī��Ʈ�� ������ ���Ͽ���
//C*n�� A + (B*n)�� ������ �Ѿ�� ���Ѵٸ� -1�� ����ض�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);

	
	if (b >= c) {
		printf("-1");
	}
	else {
		//������� / (���� - �������) + 1 = ���ͺб���
		printf("%lld", a / (c - b) + 1);
	}

	return 0;
}

//�ܼ� �ݺ������� �ذ��Ϸ��ϱ� ���� ���������� �����ض�.
