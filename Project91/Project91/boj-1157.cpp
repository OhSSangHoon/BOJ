//boj-1157
//�ܾ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	char alp[1000000];
	int count[52]; //�ҹ��� a-z(26) �빮��A-Z(26)
	int len = 0, i = 0, max = 0, index = 0, cnt = 0;

	for (int i = 0; i < 52; i++) {
		count[i] = 0;
	}

	//���ڿ��� �Է� �� ����Ű �Է��Ͽ� ����
	while (scanf("%[^\n]", alp)) {

		if (alp[i] == '\0')
			break;
		i++;
	}

	len = strlen(alp);

	//���ڿ��� ���� ��ŭ ������ ���� �� ã�� 
	for (int i = 0; i < len; i++) {
		//�빮�� A-Z
		for (int j = 65; j <= 90; j++) {
			if (alp[i] == j) {
				count[j - 65] = count[j - 65] + 1;
			}
		}
		//�ҹ���a-z
		for (int j = 97; j <= 122; j++) {
			if (alp[i] == j) {
				count[j - 71] = count[j - 71] + 1;
			}
		}
	}

	//�� �ҹ��� count����
	for (int i = 0; i < 26; i++) {
		count[i] = count[i] + count[i + 26];
	}

	/*s
	for (int i = 0; i < 26; i++){
		printf("%d ", count[i]);
	}
	*/


	for (int i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
			index = i;
		} 
	}

	//���ĺ� ���� Ƚ�� ã��
	for (int i = 0; i < 26; i++) {
		if (count[i] == max) {
			cnt++;
		}
	}

	if (cnt > 1) {
		printf("?");
	}
	else {
		printf("%c", index + 65);//�빮�ڷ� ���
	}


	return 0;
}