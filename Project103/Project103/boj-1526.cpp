//boj-1526
//가장 큰 금민수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;


	scanf("%d", &n);

	//i는 n부터 4까지 1씩 감소하면서 반복한다
	for (int i = n; i >= 4; i--) {
		int temp = i;
		int flag = 1;

		//temp를 0이 될때까지 반복시킴
		while (temp != 0) {
			//temp값 을 10으로 나누었을때 나머지가 4나 7이 아니라면
			if (temp % 10 != 4 && temp % 10 != 7) {
				flag = 0;
				break;
			}
			//4 나 7이라면
			else {
				//10을 나누어 다음 자리수를 계산한다
				temp /= 10;
			}
		}
		if (flag == 1) {
			printf("%d", i);
			break;
		}
	}
}