//baekjoon-4504
//배수 찾기

//첫째 줄에  확인할 숫자 n
//while문 돌려서 0입력하면 끝 
//입력한 수들이 n의 배수인지 아닌 지 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int n = 0;
	int a = 0;


	scanf("%d", &n);

	while (1) {

		scanf("%d", &a);

		if (a == 0)
			break;

		if (a % n == 0) {
			printf("%d is a multiple of %d.\n", a, n);
		}
		else if( a % n != 0) {
			printf("%d is NOT a multiple of %d.\n", a, n);
		}

		
	}
	return 0;
}