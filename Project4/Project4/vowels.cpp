//baekjoon-1264 ������ ����


//���� a e i o u �� ������ ���� ����
//�� �� ���� ���� ��ҹ���, , . ! ? �������� �̷���� ������ �־�����. �� ���� �ִ� 255���ڷ� �̷���� �ִ�.
//�Է��� ������ �� �ٿ� # �� ���ڸ��� �־�����.

#include <stdio.h>
#include <string.h>

int main(void) {
		char arr[255];

	while (1) {
		int count = 0;
		
		gets_s(arr);
		int len = strlen(arr);

		if (arr[0] == '#') {
			break;
		}

		for (int i = 0; i < len; i++) {

			if (arr[i] == 'a' || arr[i] == 'A')
				count++;
			else if (arr[i] == 'e' || arr[i] == 'E')
				count++;
			else if (arr[i] == 'i' || arr[i] == 'I')
				count++;
			else if (arr[i] == 'o' || arr[i] == 'O')
				count++;
			else if (arr[i] == 'u' || arr[i] == 'U')
				count++;
		}
		
		printf("%d\n", count);
	}
	return 0;
}