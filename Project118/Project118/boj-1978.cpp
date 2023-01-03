//boj-1978
//�Ҽ� ã��


//�Ҽ� 2,3,5,7 ... 1�� �ڱ� �ڽŸ� �ִ� ��
//1�� �Ҽ��� �ƴϴ�

//�����佺�׳׽��� ü ���
//2���� ũ�鼭 �ڱ� �ڽ��� �����ٱ����� ���� �������� �ʴ� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int cnt = n;
	
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		//1�� �Ҽ��� �ƴϱ� ������ ���ش�.
		if (arr[i] == 1) {
			cnt--;
		}
	}

	for (int i = 0; i < n; i++) {
		//�����佺�׳׽��� ü 2���� ũ�鼭 �����ٱ����� ���� �������� �ʴ� ��
		for (int j = 2; j <= sqrt(arr[i]); j++) {
			//���� ���ٸ� ���ش�.
			if (arr[i] % j == 0){
				cnt--;
				//0���� ������ ���� Ż��
				//(cnt���� ���� �������� 0�� �Ǵ� ���� ���� �� �ִ�.)
				break;
			}
		}
	}
	
	printf("%d", cnt);

	return 0;
}
