//boj-1367
//������ ����

//���� �ڸ� ���� õ���ڸ����� ���ڸ��� ������ ���Ѵ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap(char* a, char* b) {
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

int rev(int n) {
	char s[100];
	
	sprintf(s, "%d", n); //���� n�� ���ڿ� s�� ��ȯ

	int len = strlen(s);
	
	for (int i = 0; i < len / 2; i++) {
		swap(&s[i], &s[len - i - 1]);//s[ó��]�� �� s[��] ���� swap���ش�
		//�� �ʿ��� ���ÿ� ����Ǳ� ������ ���ڿ��� ���� / 2��ŭ�� �������ָ� �ȴ�.
		//���ڿ��� ���� ��ŭ �����ϸ� �ᱹ ���ڸ��� ���ư��� ������
	}

	return atoi(s);//���������� ��ȯ
}

int main(void) {
	int x, y;
	
	scanf("%d %d", &x, &y);

	int sum = rev(x) + rev(y); //sum �� x�� y�� ������ ���� ���̴�.
	//ex) x = 123 , y= 100 �̶�� sum = 321 + 1 
	//sum = 322

	printf("%d", rev(sum));//sum�� rev���� ����Ѵ�. //223

	return 0;
}