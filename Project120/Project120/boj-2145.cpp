//boj-2145
//숫자 놀이


//n 은 99999이하의 양의 정수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//각 자리수의 합 
int nanum(int x) {
	int sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(void) {
	int n;

	while(1){
		scanf("%d", &n);

		if (n == 0)
			break;

		//n이 9 보다 크다면 nanum함수를 계속 실행시킨다
		while (n > 9) {
			//n = sum의 값을 반환
			n = nanum(n);
		}
		printf("%d\n", n);
	}

	return 0;
}