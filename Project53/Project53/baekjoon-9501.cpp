//baekjoon-9501
//spaceship

//우주선의 최고속도 v, 연료량f, 시간당 연료 소비율c
//우주선의 개수n, 목적지까지의거리 d

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t = 0;

	scanf("%d", &t);//테스트 케이스

	for (int i = 0; i < t; i++) {
		int n = 0, d = 0, count = 0;

		scanf("%d %d", &n, &d);

		for (int j = 0; j < n; j++) {
			int v = 0, f = 0, c = 0;

			scanf("%d %d %d", &v, &f, &c);

			int val = v * f / c;//최고속도 x 연료량 / 시간당 소비율 = 갈 수 있는 최대 거리

			if (val >= d) { //최대거리가 목적지보다 크거나 같다면

				count += 1;//증가
			}
			//printf("%d\n", val);
		}
		printf("%d\n", count);
	}
	return 0;
 }