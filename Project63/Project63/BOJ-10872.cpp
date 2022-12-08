//boj-10872
//factorial

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, sum = 1;

	scanf("%d", &n);

	

	while (n) {
		n--;
		sum *= n + 1;
	}

	printf("%d\n", sum);

	return 0;
}