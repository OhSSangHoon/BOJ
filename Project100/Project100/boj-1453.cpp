//boj-1453
//�ǽù� �˹�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int n, cnt = 0;

	scanf("%d", &n);

	int arr, check[101] = { 0, };


	for (int i = 0; i < n; i++) {
		scanf("%d", &arr);

		//check�� arr��° �迭�� 1�� ���� ��Ų��.
		//�ߺ� ���� ������ ���� ��� ����
		check[arr]++;


		//���� check[arr]�� ���� 1���� ũ�ٸ� ī��Ʈ ����
		if (check[arr] > 1) {
			cnt++;
		}
	}
	
	printf("%d", cnt);

	/*
	for (int i = 1; i <= n; i++) {
		printf("%d ", check[i]);
	}
	*/

	return 0;
}