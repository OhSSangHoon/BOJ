//�迭 1/1 1/2 2/1 ... ������ ���� �м����� �ִ�
//����x�� �־����� �� x��° �м��� ���Ͽ���


//n��° ���� ù��° ���� ������ ���� ���ڿ� �и��� ���� ���μ� + 1�̴�
//���� a�� b�� ����� ������ �ָ� �ȴ�.

//���ڴ� line - (sum - x)
//�и�� ����+�и� = line + 1�̱� ������ �и� = line+1-���ڸ� ���ָ� ���´�

//Ȧ�� �������������� ���� ¦�� �������������� ���� �ȴ�.

//Ȧ�� �����̶�� ����b �и�a, ¦�� �����̸� ����a �и�b�� ��½�Ų��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0, sum = 0;
	int line = 1; //ù° �� 1�� ��° �� 2�� ... 5° �� 5��

	scanf("%d", &x);

	for (int i = 0; i < x; i++) {
		sum += line;
		
		if (x <= sum) {
			int a = line - (sum - x);
			int b = line + 1 - a;
			//¦�� ���� �� ���
			if (line % 2 == 0) {
				printf("%d/%d", a, b);
			}
			else {
				printf("%d/%d", b, a);
			}
			break;
		}

		line++;
	}


	return 0;
}
   