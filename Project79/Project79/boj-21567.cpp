//boj-21567
//숫자의 개수2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c;
	int n = 0;
	long long num = 1;
	int arr[10] = { 0, };

	scanf("%lld %lld %lld", &a, &b, &c);

	num = a * b * c;


	//num이 0이 될 때 까지 반복
	while(num > 0) {
		n = num % 10; //자리 수의 1의 자리 수를 알기 위해 나머지 값을 저장

		arr[n]++; //해당 나머지값을 배열[같은 수]에 카운트 해준다

		num /= 10; //그다음 자리 수를 알기 위해 / 10
	}
	
	//0부터 9까지 출력
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	

	return 0;
}