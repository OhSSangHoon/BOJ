//boj-2292
//벌집

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
int main(void) {
	int n, i = 2, j = 5, cnt= 2;
	//j 2번 방 부터 시작하기 때문에 5부터 6씩 증가
	//i 해당 방의 최소값

	scanf("%d", &n);

	if (n == 1) {
		cnt = 1;
		printf("%d", cnt);

		return 0;
	}
	
	while (1) {
		//i가 n보다 작거가 같고, i + j 가 n보다 크거나 같을 때
		//출력 후 탈출
		if (i <= n && i + j >= n) {
			printf("%d", cnt);
			break;
		}
		//달성하기 전까진 반복

		//ex) 8번까지 가는거라면
		//i + j = 7이기 때문에 해당 함수 실행 2 += 5 + 1 = 8
		//5 += 6 = 11
		i += j + 1;
		j += 6;
		//지나간 방의 개수
		cnt++;
	}

}