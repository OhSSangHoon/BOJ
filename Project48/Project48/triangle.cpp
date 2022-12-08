//baekjoon-6322
//직각 삼각형의 두 변

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//a,b,c 세 변 입력한다. 
//a,b,c 중 하나는 -1이며, -1은 알 수 없는 변의 길이이다.
//다른 두 수는 10,000보다 작거나 같은 자연수이다.

//입력의 마지막 줄에는 0이 세 개 주어진다.

//루트함수 sqrt에 대해서 배우게 되었다.

int main(void) {
		int i = 0;
		int tri[4];
		double triangle = 0;

	while (1) {
		
		scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);

		if (tri[0], tri[1], tri[2] == '\0'){
			break;
		}

		if (tri[0] == -1) { //a == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[2] * tri[2]) - (tri[1] * tri[1]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}
			else {
				printf("a = %.3lf\n\n", sqrt(triangle));
			}
		}
		else if (tri[1] == -1) { //b == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[2] * tri[2]) - (tri[0] * tri[0]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}
			else {
				printf("b = %.3lf\n\n", sqrt(triangle));
			}

		}
		else if (tri[2] == -1) { //c == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[0] * tri[0]) + (tri[1] * tri[1]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}else{
				printf("c = %.3lf\n\n", sqrt(triangle));
			}
		}
	}
	return 0;
}