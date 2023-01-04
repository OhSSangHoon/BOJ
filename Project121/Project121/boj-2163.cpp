//boj-2163
//초콜릿 자르기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m;

	scanf("%d %d", &n, &m);

	int chocolate = n * m;

	printf("%d\n", chocolate - 1);

	return 0;
}
