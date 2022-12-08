//baekjoon-4880
//다음 수

//등차수열과 등비수열을 구하는 문제
//등차수열이면 AP와 다음 항 출력 / 등비수열이면 GP와 다음 항 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int ap=0, gp=0;

	while (1) {
		int a1, a2, a3;

		scanf("%d %d %d", &a1, &a2, &a3);

		//a1 a2 a3의 값이 0이라면 break;
		if (a1, a2, a3 == 0)
			break;

		//등차수열
		if (a2 - a1 == a3 - a2) {
			ap = a3 - a2;
			printf("AP %d\n", ap+a3);
		}
		else {//등비수열
			gp = a3 / a2;
			printf("GP %d\n", gp * a3);
		}
	}
	return 0;
}