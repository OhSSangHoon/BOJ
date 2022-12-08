//boj-1225
//이상한 곱셈

//숫자를 문자열로 입력받아 정수형 숫자로 변환 후 곱셈의 합을 출력시키는 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[10001] = { 0, }, y[10001] = { 0, };
	//10000까지 라서 배열의 크기가 5가 아닌 10000자리 수이다.
	long long sum = 0;

	scanf("%s %s", x, y);

	for (int i = 0; x[i] != '\0'; i++) {
		for (int j = 0; y[j] != '\0'; j++) {
			//문자열 숫자를 정수형 숫자로 변환
			sum += (x[i]-'0') * (y[j] - '0');
		}
	}
	printf("%lld", sum);

	return 0;
}