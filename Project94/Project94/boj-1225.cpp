//boj-1225
//�̻��� ����

//���ڸ� ���ڿ��� �Է¹޾� ������ ���ڷ� ��ȯ �� ������ ���� ��½�Ű�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[10001] = { 0, }, y[10001] = { 0, };
	//10000���� �� �迭�� ũ�Ⱑ 5�� �ƴ� 10000�ڸ� ���̴�.
	long long sum = 0;

	scanf("%s %s", x, y);

	for (int i = 0; x[i] != '\0'; i++) {
		for (int j = 0; y[j] != '\0'; j++) {
			//���ڿ� ���ڸ� ������ ���ڷ� ��ȯ
			sum += (x[i]-'0') * (y[j] - '0');
		}
	}
	printf("%lld", sum);

	return 0;
}