//baekjoon-1547 
//ball

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int cup[3] = { 1,2,3 }; //cup 1, 2, 3�� �迭
	int num=0; //���� ��ġ�� �ٲ� Ƚ��
	int a, b=0; //���� �ٲ� ���a, b
	int a1, b1, temp; //swap �Լ��� ����� ����

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);

		//a�� b�� ���ٸ� �׳� �ѱ� (���ڸ� �̵��̶� ���� �޶����� �ʴ´�.)
		if (a == b)
			continue;
		else {
			for (int j = 0; j <= 3; j++) {
				//cup[1,2,3]�� ���� a�� ���ٸ�
				if (cup[j] == a)
					a1 = j; //j�� a1�� ����

				//cup[1,2,3]�� ���� b�� ���ٸ�
				if (cup[j] == b)
					b1 = j; //j�� b1�� ����
			}
			//cup[a1]�� ���� cup[b1]�� ���� ���� ��ȯ
			temp = cup[a1];
			cup[a1] = cup[b1];
			cup[b1] = temp;
		}
	}
	printf("%d", cup[0]);
	return 0;
}