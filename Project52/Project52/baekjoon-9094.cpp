//baekjoon-9094번
//수학적 호기심

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//두 정수 n과 m이 주어졌을 때, 0 < a < b < n인 정수 쌍 (a, b) 중에서
//(a2+b2+m)/(ab)가 정수인 쌍의 개수를 구하여라

//나누기를 나머지로만 바꾸어 주면 되는 문제

int main(void) {
	int t = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int m = 0, n = 0;
		int a = 0, count = 0;

		scanf("%d %d", &n, &m);

		//1부터 n-1까지 for문 실행
		for (int j = 1; j <= n; j++) {
			int b = 0;

			a++; //a값 증가
			
			b = a; //b에 a값 대입

			//k = b부터 n-1까지 for문 실행
			for (int k = b; k < n-1; k++) {
				b++;//b값 증가

				//a^2+b^2+m 을 a*b 로 나눈 나머지가 0이라면 (정수)
				if (((a * a) + (b * b) + m) % (a * b) == 0) {
					//count증가
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}