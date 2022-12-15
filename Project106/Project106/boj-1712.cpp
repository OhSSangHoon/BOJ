//boj-1712
//손익 분기점

//고정 지출 A, 가변 지출 B, 수입 C가 주어졌을 때
//C*n가 A + (B*n)을 넘어서는 손익 분기점이 발생하는 카운트의 개수를 구하여라
//C*n이 A + (B*n)을 영원히 넘어서지 못한다면 -1을 출력해라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);

	
	if (b >= c) {
		printf("-1");
	}
	else {
		//고정비용 / (수입 - 가변비용) + 1 = 손익분기점
		printf("%lld", a / (c - b) + 1);
	}

	return 0;
}

//단순 반복문으로 해결하려하기 보단 수학적으로 접근해라.
