//boj-1476
//날짜 계산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//e > 15 , s > 28, m > 19 시 다시 1 1 1
//while문을 실행시켜 e s m을 증가시켜 E S M과 같아질 때 까지 반복 시킨다
//그 반복시킨 횟수를 year에 저장 우리지구의 년도 이다

int main(void) {
	int E, S, M;
	int e = 1, s = 1, m = 1;
	int year = 0;

	scanf("%d %d %d", &E, &S, &M);

	while (1) {
		year++;

		//소문자 e s m(횟수) 와 대문자 E S M(입력 값)가 같은값이라면 탈출
		if (e == E && s == S && m == M)
			break;

		//탈출문 위에있으면 같아졌을 때 또한 증가하기 때문에 탈출을 하지 못함
		e++;
		s++;
		m++;

		if (e > 15) e = 1;
		if (s > 28) s = 1;
		if (m > 19) m = 1;

	}
	printf("%d", year);

	return 0;
}

//아직 문제를 읽고 어떠한 풀이식이나 공식(?)을 알아내는 것이 많이 부족한 것 같다.