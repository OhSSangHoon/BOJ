//boj-1934
//최소공배수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//최소 공배수를 구하는 식 사용
//두 수의 곱 / 최대 공약수 = 최소 공배수

int main(void) {
	int n, a, b, gcd;

	scanf("%d", &n);

	for(int j = 0; j < n; j++){
		scanf("%d %d", &a, &b);

		//i를 10 && 5가 될때까지 증가 
		for (int i = 1; i <= a && i <= b; i++) {
			//a 와 b를 i로 나누었을때 나머지가 0이라면
			if (a % i == 0 && b % i == 0) {
				gcd = i;//i = 최대 공약수
			}
		}

		//최소 공배수 = 두 수의 곱 / 최대 공약수
		int lcm = (a * b) / gcd;

		printf("%d\n", lcm);
	}

	return 0;
}