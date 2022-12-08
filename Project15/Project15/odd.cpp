//baekjoon-2576
//odd

//7개의 자연수를 입력 후 홀수인 자연수들을 찾아 그 합을 구하고,
//고른 홀수 중 최솟값을 찾는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0, n = 0, odd = 0, sum = 0, min = 99;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num);
		
		n = num;
		//짝수인지 홀수인지 확인
		if (n % 2 != 0) {
			//홀수
			odd = n;
			sum += odd;

			if (odd < min) {
				min = odd;
			}
		}
	}
	if( sum != 0){
	//홀수의 합
	printf("%d\n", sum);
	//홀수의 최소값
	printf("%d\n", min);
	}
	else {
		printf("-1");
	}
	
	
	return 0;
}