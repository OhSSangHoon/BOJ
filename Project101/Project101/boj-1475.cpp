//boj-1475
//�� ��ȣ
//9�� 6�� ���� ����� ����� �� �ִ�.
//if(arr[i] == 9 || arr[i] == 6) cnt / 2;�� ��� ������ 2��Ʈ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[8] = { 0, };
	int check[10] = { 0, };
	int max = 0;

	scanf("%s", &arr);


	int len = strlen(arr);


	for (int i = 0; i < len; i++) {
		check[arr[i]-'0']++;
	}

	//6�� 9�� ���� ��밡���ϱ� ������ 2�� ����� ���ο� �־��ش�
	check[6] = (check[6] + check[9] + 1) / 2;

	//cnt�� �ִ밪�� ã�Ƽ� ����Ѵ�.
	for (int i = 0; i < 9; i++) {
		if (max < check[i]) {
			max = check[i];
		}
		//printf("%d ", check[i]);
	}

	printf("%d", max);

	return 0;
}