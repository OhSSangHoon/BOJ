//boj-1453
//피시방 알바

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int n, cnt = 0;

	scanf("%d", &n);

	int arr, check[101] = { 0, };


	for (int i = 0; i < n; i++) {
		scanf("%d", &arr);

		//check의 arr번째 배열을 1씩 증가 시킨다.
		//중복 수가 나오면 값은 계속 증가
		check[arr]++;


		//만약 check[arr]의 값이 1보다 크다면 카운트 증가
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