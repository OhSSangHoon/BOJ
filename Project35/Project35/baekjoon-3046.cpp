//baekjoon-3046
//R2

//두 수 R1과 R2, 두 수의 평균 S.
// R2를 구하는 식을 구하라.

//평균을 구하는 식 S = (R1+R2)/2
//R2를 구하는 식 R2 = 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int R1, S;

	scanf("%d %d", &R1, &S);

	int R2 = S * 2 - R1;

	printf("%d", R2);

	return 0;
}