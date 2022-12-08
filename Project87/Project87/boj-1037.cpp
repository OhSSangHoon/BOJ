//boj-1037
//약수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, min = 1000001, max = 0;

	scanf("%d", &n);

	int* m = (int*)malloc(sizeof(int) * n);



	for (int i = 0; i < n; i++) {
		m[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}

	for (int i = 0; i < n; i++) {
		if (min > m[i]) {
			min = m[i];
		}
		if (max < m[i]) {
			max = m[i];
		}
	}

	//정수 A = max * min
	printf("%d", min * max);

	return 0;
}