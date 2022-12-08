//baekjoon-2420
//사파리 월드

//유명도의 차이 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	long long n = 0, m = 0, f = 0;

	scanf("%lld %lld", &n, &m);

	//n이 음수일 때
	if (n < 0) {
		f = n - m;
		f = abs(f);
	}
	else {
		f = m - n;
		f = abs(f);
	}

	printf("%lld\n", f);
}