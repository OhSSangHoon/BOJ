//boj-2153
//�Ҽ� �ܾ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//a...z = 1..26
//A...Z = 27...52

int main(void) {
	char str[20] = { 0, };
	int num[20] = { 0, };
	int sum = 0, tmp = 1;

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			num[i] = str[i] - 38;
		}

		else if (str[i] >= 'a' && str[i] <= 'z') {
			num[i] = str[i] - 96;
		}

		sum += num[i];
	}

	//�����佺�׳׽��� ü 2���� ũ�鼭 �����ٱ����� ���� �������� �ʴ� ��
	for (int j = 2; j <= sqrt(sum); j++) {
		//�������ٸ� (�Ҽ�x)
		if (sum % j == 0) {
			tmp = 0;
		}
	}

	if(tmp == 0){
		printf("It is not a prime word.\n");
	}else{
		printf("It is a prime word.\n");
	}

	return 0;
}