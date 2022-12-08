//boj-15734
//명장 남정훈


//왼발 오른발 수가 적은 쪽에 양발의 인원을 채워서 맞춰준 뒤 둘을 더한 값을 낸다.

//왼발 과 오른발 선수의 인원 수 만 맞춰주면된다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l, r, a;//왼발, 오른발, 양발
	int sum, squad;
	int s;
	scanf("%d %d %d", &l, &r, &a);
	sum = l + r + a;
	squad = a - abs(l - r);//절대값abs

	//조건연산자 suqad 가 0보다 크거나 같으면 sum-squad % 2를 출력 아니면 sum - abs(squad)를 출력
	int temp = squad >= 0 ? sum - squad % 2 : sum - abs(squad);
	printf("%d", temp);
	return 0;
}