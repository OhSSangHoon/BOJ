//boj-1427
//소트인사이드

//배열 내림차순 정렬

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char arr[10];
	int temp = 0;

	scanf("%s", arr);

	int len = strlen(arr);

	int* n = (int*)malloc(sizeof(int) * len);


	for (int i = 0; i < len; i++) {
		n[i] = arr[i]-'0';
	}

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			//기존 코드(n[j] <= n[j+1)
			//j+1이 배열n의 인덱스 범위를 초과해서 len값을 참조한다
			//범위를 초과하면 쓰레기값이 가져와져서 정렬에 포함될 수 있기 때문에
			//j+1 값이 len 보다 작다고 설정 해야한다
			if (j+1 < len && n[j] <= n[j+1]) {
				temp = n[j + 1];
				n[j + 1] = n[j];
				n[j] = temp;
			}
		}
	}


	for (int i = 0; i < len; i++) {
		printf("%d", n[i]);
	}

	return 0;
}