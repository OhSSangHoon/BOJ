//boj-1316
//�׷�ܾ� üĿ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[26];
	int n, cnt = 0;
	char alp[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		
		scanf("%s", alp);

		for (int j = 0; j < 26; j++) {
			arr[j] = 0;
		}

		int len = strlen(alp);

		for(int j = 0; j < len; j++) {
			//arr[���ĺ� ����]��° �迭�� 0 �̶�� 1 ����
			if(arr[alp[j] - 97] == 0){
				arr[alp[j] - 97]++; // ���ϴ°� ��� 1�� ���� �����൵ ��
			}
			//���� 0�� �ƴ϶��, �ٷξ� ���� Ȯ��
			else {
				if (alp[j - 1] != alp[j]) //���� �ٸ��ٸ�, �׷� �ܾ �ƴϹǷ� �ݺ��� Ż��
					break;
			}

			//j�� Ż�������ʰ� len��ŭ �� ���Ҵٸ� ī��Ʈ ���ش�.
			if (j == len-1) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}