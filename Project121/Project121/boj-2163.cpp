//boj-2163
//���ݸ� �ڸ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m;

	scanf("%d %d", &n, &m);

	int chocolate = n * m;

	printf("%d\n", chocolate - 1);

	return 0;
}
