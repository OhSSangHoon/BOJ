//boj-1977
//완전 제곱수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m, n, i = 1, search = 1;
	int min = 10000, sum = 0;

	scanf("%d %d", &m, &n);

	for ((i*i) >= m; (i*i) <= n; i++) {
		if (i == i && i*i >= m && i * i <= n) {
			//printf("%d\n", i * i);
			search = 0;
			//완전 제곱수 누적합
			sum += i * i;

			//완전 제곱수 최솟값
			if (min > i * i) {
				min = i * i;
			}
		}
	}
	if (search == 1) {
		printf("-1\n");
	}
	else {
		printf("%d %d", sum, min);
	}

	return 0;
}