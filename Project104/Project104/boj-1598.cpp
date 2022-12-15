//boj-1598
//꼬리를 무는 숫자 나열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//배열을 만들지 말고 좌표를 찾아 구하여라
//x 축은 4씩 증가 y축은 1씩 증가 한다.
//x 축은 (a - 1) / 4 
//y 축은 (a - 1) % 4 로 구할 수 있다.

int main(void) {
	int a, b;
	int ax, bx; //x좌표
	int ay, by; //y좌표

	scanf("%d %d", &a, &b);

	ax = (a - 1) / 4;
	bx = (b - 1) / 4;

	//printf("%d %d", ax, bx);

	ay = (a - 1) % 4;
	by = (b - 1) % 4;

	//printf("%d %d", ay, by);

	//x좌표의 값과 y좌표의 값을 합하면 직각 거리가 나온다
	//값을 구할 때 a좌표의 값이 b좌표의 값보다 작을 수 있으므로 절대값 함수abs를 사용한다
	int sum = abs(ax - bx) + abs(ay - by);

	printf("%d", sum);

	return 0;
}