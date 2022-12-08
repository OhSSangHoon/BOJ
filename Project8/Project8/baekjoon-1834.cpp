//baekjoon-1834
//나머지와 몫이 같은 수


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//규칙
//n = 1일 때 0
//n = 2일 때 3(0, 3)
//n = 3일 때 12(4, 8)
//n = 4일 때 30(5, 10, 15)...


//int형 과 long형은 4byte만 가능하기때문에
//long long형을 사용했다

int main(void) {
	long long num = 0;
	long long sum = 0;

	scanf("%lld", &num);

	for (int i = 0; i < num; i++) {
		
		sum += (num + 1) * i;
	}

	printf("%lld", sum);
	return 0;
}