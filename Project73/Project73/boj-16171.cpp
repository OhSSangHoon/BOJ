//boj-16171
//���� ģ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//���ڿ� a�� b�� �Է�
//a�� b�� ���ؼ� ���ӵ� ���ڿ��� ���ٸ� 1 �ƴϸ� 0 ���

int main(void) {
	char a[101];
	char b[101];

	
	int len = 0, cnt = 0;

	scanf("%s", a);
	scanf("%s", b);


	char* search = (char*)malloc(sizeof(a));
	len = strlen(a);

	for (int i = 0; i < len; i++) {
		if (a[i] < 48 || a[i] > 57) {//a�� ����ִ� ���ڰ� ���ڰ� �ƴ϶��
			search[cnt++] = a[i]; //search�� �ִ´�
		}
	}
	search[cnt] = NULL; //search�� �������� NULL (\0)���� ������.

	//strstr�Լ� search���� b�� ��ġ�ϴ� ���ڿ��� �ִ��� Ȯ���ϴ� �Լ�
	//strstr�Լ��� �𸣰� Ǯ�� ��� �񱳸� �� ���� ���� �����µ�
	//strstr�Լ��� ���ؼ� ���� Ǫ�� ���� ��������
	if (strstr(search, b) != NULL) {
		printf("1");
	}
	else {
		printf("0");
	}
	
	return 0;
} 