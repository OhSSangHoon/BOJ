//boj-1964
//오각형

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, pentagon;
	long long sum = 2, ssum=2;

	scanf("%lld", &n);

	//2에다가 3씩 더한것을 최종적으로 누적 합 시킨다.
	//n == 2 일땐  2 / 2출력
	//n == 3 일땐 3을 1번 더해 주기 때문에 sum = 5 ssum = 2 + 5 가 되기때문에
	//5 / 7 출력
	if(n >= 2){
		for (int i = 3; i <= n; i++) {
			sum += 3;
			ssum += sum;
		}
	}
	else if (n == 1) {
		sum = 0;
		ssum = 0;
	}

	pentagon = (n * 5) + ssum;

	//45678로 나누던 안나누던 답은 같은데 왜 나누는지 모르겠다.
	pentagon %= 45678;
	

	printf("%lld", pentagon);

	return 0;
}