//boj-2010
//�÷���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int tab, n;
	int sum = 0;

	scanf("%d", &n);

	//��Ƽ���� ���� - 1 = ��Ƽ�ǿ� ���� �����ϴ� ��Ƽ���� ��
	int use = n - 1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &tab);
		
		//��� ��Ƽ���� �÷����� ����
		sum += tab;
	}


	//��� ��Ƽ���� �÷����� ���� - ���� �����ϴ� ��Ƽ���� ��
	//(�̹� ������� �÷���) = �ִ�� ������ ����� �� �ִ� ��ǻ���� ��
	printf("%d", sum - use);

	return 0;
}