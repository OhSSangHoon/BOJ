//boj-1159
//�� ���

//���ĺ��� �迭�� ���� cnt ��Ų �� 5���� �Ѿ�� �ش� ���ĺ� ���������� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//�迭member�� �Է� �ް� ù ���ڸ� �ٸ� �迭�� ���� or
//�迭member�� �Է� �ް� int�� �迭�� cnt�� ���� v


int main(void) {
	char member[40];
	int arr[26], n = 0, cnt = 0;

	scanf("%d", &n);

	//arr�� �迭�� 0���� �ʱ�ȭ
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%s", member);

		//arr[member�迭�� �� ó�� ���ڸ� ���ĺ� ������� ����]; 
		// ex) a = 0 , b = 1 ... z = 25
		arr[member[0] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			printf("%c", i + 97); //�ҹ��� �ƽ�Ű�ڵ� �� ��ŭ �߰����ؼ� ���ĺ� ���
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("PREDAJA");
	}

	return 0;
}
  