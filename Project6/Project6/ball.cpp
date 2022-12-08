//baekjoon-1547 
//ball

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int cup[3] = { 1,2,3 }; //cup 1, 2, 3의 배열
	int num=0; //컵의 위치를 바꿀 횟수
	int a, b=0; //컵을 바꾼 방법a, b
	int a1, b1, temp; //swap 함수에 사용할 변수

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);

		//a와 b가 같다면 그냥 넘김 (제자리 이동이라 값이 달라지지 않는다.)
		if (a == b)
			continue;
		else {
			for (int j = 0; j <= 3; j++) {
				//cup[1,2,3]의 값이 a와 같다면
				if (cup[j] == a)
					a1 = j; //j를 a1에 대입

				//cup[1,2,3]의 값이 b와 같다면
				if (cup[j] == b)
					b1 = j; //j를 b1에 대입
			}
			//cup[a1]의 값과 cup[b1]의 값을 서로 교환
			temp = cup[a1];
			cup[a1] = cup[b1];
			cup[b1] = temp;
		}
	}
	printf("%d", cup[0]);
	return 0;
}