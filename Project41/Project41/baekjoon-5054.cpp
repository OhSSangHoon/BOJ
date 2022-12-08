//baekjoon-5054
//주차의 신

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//최단 거리에 있는 주차 위치를 정하기 위해 모든 상점의 평균을 구한다
//평균을 구한 후 최소 위치와 최대 위치를 구해
//최소,최대 위치 와 주차위치의 차를 구해 *2를 해주면 됨

int main(void) {
	int t = 0;
	

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n = 0, store[20], average = 0, sum = 0;
		int min = 100, max = 0;
		int parking = 0;

		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
			scanf("%d", &store[j]);

			sum += store[j];

			average = sum / n;

			if (min > store[j]) {
				min = store[j];
			}
			
			if (max < store[j]) {
				max = store[j];
				
			}
			
		}

		min = average - min;//주차 위치와 최소 상점과의 거리
		max = max - average;//주차 위치와 최대 상점과의 거리
		
		parking = (min + max) * 2;//주차 위치

		printf("%d\n", parking);
	}
	return 0;
}