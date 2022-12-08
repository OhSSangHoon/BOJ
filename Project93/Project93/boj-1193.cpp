//배열 1/1 1/2 2/1 ... 무수히 많은 분수들이 있다
//숫자x가 주어졌을 때 x번째 분수를 구하여라


//n번째 줄의 첫번째 수와 마지막 수는 분자와 분모의 합이 라인수 + 1이다
//변수 a와 b를 만들어 나누어 주면 된다.

//분자는 line - (sum - x)
//분모는 분자+분모 = line + 1이기 때문에 분모 = line+1-분자를 해주면 나온다

//홀수 라인은↗쪽으로 진행 짝수 라인은↙쪽으로 진행 된다.

//홀수 라인이라면 분자b 분모a, 짝수 라인이면 분자a 분모b로 출력시킨다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0, sum = 0;
	int line = 1; //첫째 출 1개 둘째 줄 2개 ... 5째 줄 5개

	scanf("%d", &x);

	for (int i = 0; i < x; i++) {
		sum += line;
		
		if (x <= sum) {
			int a = line - (sum - x);
			int b = line + 1 - a;
			//짝수 라인 일 경우
			if (line % 2 == 0) {
				printf("%d/%d", a, b);
			}
			else {
				printf("%d/%d", b, a);
			}
			break;
		}

		line++;
	}


	return 0;
}
   