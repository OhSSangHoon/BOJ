//baekjoon-2475
//verification

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	long n;
	int sum=0, a = 0;

	for(int i =0; i < 5; i++){
		scanf("%ld", &n); //5개의 수 입력
		sum += n * n; //입력한 수를 제곱한 뒤 전부 더해준다
		
	}

	a = sum % 10; //나머지를 구하기 위해 sum % 10 

	printf("%d", a); //나머지 출력
	
} 