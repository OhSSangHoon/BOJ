//baekjoon-5032
//탄산 음료

// 빈 병을 특정 개수만큼 가져가면, 새 병으로 바꾸어준다.
// 입력에 가지고 있는 빈 병의 수 e, 그날 발견한 빈 병의 수 f,
// 새 병으로 바꾸는데 필요한 빈 병의 개수 c


//9 0 3 = 3개 3 0 3 = 1개 총 4개
//5 5 2 = 5개 5 0 2 = 2개 4 0 2 = 2개 총 9개

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int e = 0, f = 0, c = 0;
	int total = 0;

	scanf("%d %d %d", &e, &f, &c);

	int drink = e + f;
	
	while(drink >= c){ //drink의 값이 c값 작으면 break;

		total += drink / c; //total은 drink에서 c의 값을 나눈 값을 전부 더한다
		 
		drink = (drink / c) + (drink % c); //drink의 값을 나눈값 + 나머지값 으로 바꾼다
	}

	printf("%d\n", total);
}