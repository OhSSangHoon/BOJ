//baekjoon-10101
//삼각형 외우기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//세각의 크기가 모두 60이면, Equilateral
//세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
//같은 각이 없는 경우에는 Scalene 180이 아닌 경우에는 Error

int main(void) {
	int a = 0, b = 0, c = 0;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;

	if (sum == 180) {
		//abc 셋 다 값이 60
		if (a, b, c == 60) {
			printf("Equilateral");
		}
		//아니면 ab 혹은 ac 혹은 bc값이 같으면
		else if(a == b || a== c || b == c) { 
			printf("Isosceles");
		}
		//abc 셋 다 값이 다르면
		if(a != b && a != c && b != c) {
			printf("Scalene");
		}
	}//sum의 값이 180이 아니면
	else if (sum != 180) {
		printf("Error\n");
	}
	return 0;
};