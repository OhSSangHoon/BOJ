// boj-1292
//���� Ǫ�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[1000];
	int cnt = 0, sum = 0;
	int a, b;


	//1���� 1000��° �� ���� ������ ����� �迭�� ����
	for (int i = 1; i <= 1000; i++) {

		for (int j = 1; j <= i; j++) {

			//cnt�� 1000��° ���� �ٴٸ��� Ż��
			if (cnt == 1000)
				break;

			//arr�� i�� i�� ����, 1�� 1�� 2�� 2��...
			arr[cnt] = i;

			cnt++;
		}
	}
	
	//1�̻� 1000������ a��b�Է�
	scanf("%d %d", &a, &b);

	//�迭�� 0 ���� �����ϱ� ������ -1
	for (int i = a-1; i < b; i++) {
		sum += arr[i];
	}

	printf("%d", sum);

	return 0;
}