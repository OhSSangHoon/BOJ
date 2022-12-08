//baekjoon-2490
//윷놀이

//배(0) 등(1)이 나오는 숫자를 세어
//도, 개, 걸, 윷, 모를 결정한다.
//
//도(0 1 1 1), 개(0 0 1 1), 걸(0 0 0 1), 윷(0 0 0 0), 모(1 1 1 1)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int yut[4]={0,};
	

	for(int i =0; i < 3; i++){
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[j]);//윷 입력
			sum += yut[j];//입력 값 더함
			
		}
		//printf("%d\n", sum);
		if (sum == 3) {
			printf("A\n");//도
		}else if(sum == 2){
			printf("B\n");//개
		}
		else if (sum == 1) {
			printf("C\n");//걸
		}
		else if (sum == 0) {
			printf("D\n");//윷
		}
		else if (sum == 4) {
			printf("E\n");//모
		}
	}
	return 0;
}