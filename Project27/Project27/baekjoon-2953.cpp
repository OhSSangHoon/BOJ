//baekjoon-2953
//나는 요리사다

//다중for문을 사용하여 합이 가장 큰 배열 찾기.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int arr[5][4] = {0,};
	int max = 0, big = 0;

	for(int i =0; i < 5; i++){
		for(int j =0; j < 4; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cnt += arr[i][j];
		}
		//printf("%d ", cnt);
		if(max < cnt){
			max = cnt;
			big = i + 1; //가장 큰 수의 배열 위치
		}
	}

	printf("%d %d", big, max);

	return 0;
}