//baekjoon-3046
//R2

//�� �� R1�� R2, �� ���� ��� S.
// R2�� ���ϴ� ���� ���϶�.

//����� ���ϴ� �� S = (R1+R2)/2
//R2�� ���ϴ� �� R2 = 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int R1, S;

	scanf("%d %d", &R1, &S);

	int R2 = S * 2 - R1;

	printf("%d", R2);

	return 0;
}