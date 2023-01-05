//boj-2153
//소수 단어

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//a...z = 1..26
//A...Z = 27...52

int main(void) {
	char str[20] = { 0, };
	int num[20] = { 0, };
	int sum = 0, tmp = 1;

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			num[i] = str[i] - 38;
		}

		else if (str[i] >= 'a' && str[i] <= 'z') {
			num[i] = str[i] - 96;
		}

		sum += num[i];
	}

	//에라토스테네스의 체 2보다 크면서 제곱근까지의 수에 나눠지지 않는 수
	for (int j = 2; j <= sqrt(sum); j++) {
		//나눠진다면 (소수x)
		if (sum % j == 0) {
			tmp = 0;
		}
	}

	if(tmp == 0){
		printf("It is not a prime word.\n");
	}else{
		printf("It is a prime word.\n");
	}

	return 0;
}