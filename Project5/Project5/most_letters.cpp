//baekjoon-1371
//���帹�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	char arr[500]; 
	char alpha[26] = { 0, };
	int cnt = 1;

	int len = strlen(arr);


	//while�� ����
	while (gets_s(arr)) {
		for (int i = 0; i < len; i++) {
			alpha[arr[i] - 97]++;

			//arr�� ^Z�� ������ while�� Ż��
			if (arr[i] == '^Z') {
				break;
			}
		}

	}

	
	for (int i = 0; i < 26; i++) {
		//�迭 alpha 1~26���� cnt�� ��
		if (alpha[i] >= cnt)
			//ũ�ų� ���ٸ� �� alpha�� ����
			cnt = alpha[i];
	}
	

	printf("���� ���� ���� ���ڴ�: ");
	for (int i = 0; i < 26; i++) {
		//���ٸ�
		if (alpha[i] == cnt)
			//���
			printf("%c ", 97 + i);
	}


}