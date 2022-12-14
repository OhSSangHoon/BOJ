//BOJ-15596
//정수 N개의 합

//C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
//a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열(0 ≤ a[i] ≤ 1, 000, 000, 1 ≤ n ≤ 3, 000, 000)
//n : 합을 구해야 하는 정수의 개수
//리턴값 : a에 포함되어 있는 정수 n개의 합

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//여기서 문제는 ans에 a의 n번째 배열값을 전부 더하는 거다
//ans += a[i]
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}