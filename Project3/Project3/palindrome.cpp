//baekjoon - 1259
//palindrome number

//� �ܾ �ڿ������� �о �Ȱ��ٸ� �� �ܾ �Ӹ�����̶�� �Ѵ�. 'radar', 'sees'��
//���� ���ڵ鵵 �ڿ������� �о ���ٸ� �� ���� �Ӹ���Ҽ��̴�. //12321, 121 ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//���ڿ��� �Է¹޴´� ���ڿ� �Է°�len ��ŭ for���� ���� ��Ų��.
//���� ���� ���� ���� �����Ͽ� �Ȱ����� yes Ʋ���� no�� ���



int main(void) {
	char str[10000];
	int len;
	int check;


	while (gets_s(str) && str[0] != '0') {
		//printf("%s\n", str);
		len = strlen(str);
		check = 1;
		for (int i = 0; i < len; i++) {
			//str �� str�� �Ųٷ� ���� Ʋ����
			if (str[i] != str[len - 1 - i]) {
				check = 0; //check = 0 �� while�� Ż��
				break;
			}
		}
		if (check == 1) {
			printf("yes\n");
		}else
			if (check == 0) {
				printf("no\n");
		}

		if (str[0] == '0')
			break;
	}
}