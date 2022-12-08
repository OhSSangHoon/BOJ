//BOJ-5613
//계산기 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long num, result = 0;
	char op = { 0, };

	while (op != '=') {
		scanf("%lld", &num);
		switch (op) {
		case '*':
			result *= num;
			break;
		case '-':
			result -= num;
			break;
		case '/':
			result /= num;
			break;
		default:
			result += num;
			break;
		}
		getchar();
		scanf("%c", &op);
	}
	printf("%lld\n", result);
	return 0;
}