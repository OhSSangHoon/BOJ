//baekjoon 1152

//���ڿ��� ������ ���ߴ� ����
//�Ǿհ� �ǵڿ� ������ �� �� �ִ�. �����ؼ� ������ ������� ���Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000000];
	int len; //���ڿ� ����
	int count = 0;

	scanf("%[^\n]", arr); //���� �Է�

	len = strlen(arr);
	

	//���� ���� ã��
	for (int i = 1; i < len-1; i++) {
		//���ڿ��� ������ ���� ��
		if (arr[i] == ' ') {
			count++; //cnt ++
		}
	}

	//���鸸 �Է����� ��
	if (len == 1) {
		if (arr[0] = ' ') {
			printf("0\n");
			return 0;
		}
	}

	//���ڿ��� ���� + 1 �̹Ƿ�, count + 1�� ���
	printf("%d\n", count + 1);

}