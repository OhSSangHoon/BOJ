//boj-1065
//한수


//Tip. 1~99는 모두 등차 수열이다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, cnt = 0, h, t, o;
	int a[4] = { 0, };

	scanf("%d", &n);

	

	//n이 100보다 작으면 0부터 n까지 count
	if (n < 100) {
		for (int i = 0; i < n; i++) {
			cnt++;
		}
	}
	//n이 100보다 크다면 기본값 99로 초기화
	else {
		cnt = 99;
	}

	//그리고 100부터 n까지 반복하면서 한수의 개수를 세어준다.
	for (int i = 100; i <= n; i++) {
		h = i / 100; //100의 자리
		t = (i / 10) % 10; //10의 자리
		o = i % 10; //1의 자리

		if ((h - t) == (t - o)) {
			cnt++;
		}
	}

	printf("%d", cnt);


	return 0;
}