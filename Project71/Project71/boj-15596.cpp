//BOJ-15596
//���� N���� ��

//C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
//a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭(0 �� a[i] �� 1, 000, 000, 1 �� n �� 3, 000, 000)
//n : ���� ���ؾ� �ϴ� ������ ����
//���ϰ� : a�� ���ԵǾ� �ִ� ���� n���� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���⼭ ������ ans�� a�� n��° �迭���� ���� ���ϴ� �Ŵ�
//ans += a[i]
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}