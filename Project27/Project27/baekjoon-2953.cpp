//baekjoon-2953
//���� �丮���

//����for���� ����Ͽ� ���� ���� ū �迭 ã��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int arr[5][4] = {0,};
	int max = 0, big = 0;

	for(int i =0; i < 5; i++){
		for(int j =0; j < 4; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cnt += arr[i][j];
		}
		//printf("%d ", cnt);
		if(max < cnt){
			max = cnt;
			big = i + 1; //���� ū ���� �迭 ��ġ
		}
	}

	printf("%d %d", big, max);

	return 0;
}