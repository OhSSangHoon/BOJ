// boj-1292
//쉽게 푸는 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[1000];
	int cnt = 0, sum = 0;
	int a, b;


	//1부터 1000번째 수 까지 수열을 만들고 배열에 저장
	for (int i = 1; i <= 1000; i++) {

		for (int j = 1; j <= i; j++) {

			//cnt가 1000번째 수에 다다르면 탈출
			if (cnt == 1000)
				break;

			//arr에 i를 i번 저장, 1은 1번 2는 2번...
			arr[cnt] = i;

			cnt++;
		}
	}
	
	//1이상 1000이하인 a와b입력
	scanf("%d %d", &a, &b);

	//배열은 0 부터 시작하기 때문에 -1
	for (int i = a-1; i < b; i++) {
		sum += arr[i];
	}

	printf("%d", sum);

	return 0;
}