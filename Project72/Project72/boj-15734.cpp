//boj-15734
//���� ������


//�޹� ������ ���� ���� �ʿ� ����� �ο��� ä���� ������ �� ���� ���� ���� ����.

//�޹� �� ������ ������ �ο� �� �� �����ָ�ȴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l, r, a;//�޹�, ������, ���
	int sum, squad;
	int s;
	scanf("%d %d %d", &l, &r, &a);
	sum = l + r + a;
	squad = a - abs(l - r);//���밪abs

	//���ǿ����� suqad �� 0���� ũ�ų� ������ sum-squad % 2�� ��� �ƴϸ� sum - abs(squad)�� ���
	int temp = squad >= 0 ? sum - squad % 2 : sum - abs(squad);
	printf("%d", temp);
	return 0;
}