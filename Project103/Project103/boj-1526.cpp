//boj-1526
//���� ū �ݹμ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;


	scanf("%d", &n);

	//i�� n���� 4���� 1�� �����ϸ鼭 �ݺ��Ѵ�
	for (int i = n; i >= 4; i--) {
		int temp = i;
		int flag = 1;

		//temp�� 0�� �ɶ����� �ݺ���Ŵ
		while (temp != 0) {
			//temp�� �� 10���� ���������� �������� 4�� 7�� �ƴ϶��
			if (temp % 10 != 4 && temp % 10 != 7) {
				flag = 0;
				break;
			}
			//4 �� 7�̶��
			else {
				//10�� ������ ���� �ڸ����� ����Ѵ�
				temp /= 10;
			}
		}
		if (flag == 1) {
			printf("%d", i);
			break;
		}
	}
}