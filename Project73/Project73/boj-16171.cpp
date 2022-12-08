//boj-16171
//나는 친구가 적다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//문자열 a와 b를 입력
//a와 b를 비교해서 연속된 문자열이 같다면 1 아니면 0 출력

int main(void) {
	char a[101];
	char b[101];

	
	int len = 0, cnt = 0;

	scanf("%s", a);
	scanf("%s", b);


	char* search = (char*)malloc(sizeof(a));
	len = strlen(a);

	for (int i = 0; i < len; i++) {
		if (a[i] < 48 || a[i] > 57) {//a에 들어있는 문자가 숫자가 아니라면
			search[cnt++] = a[i]; //search에 넣는다
		}
	}
	search[cnt] = NULL; //search의 마지막은 NULL (\0)으로 끝난다.

	//strstr함수 search에서 b와 일치하는 문자열이 있는지 확인하는 함수
	//strstr함수를 모르고 풀땐 어떻게 비교를 해 줄지 몰라서 막혔는데
	//strstr함수에 대해서 배우고 푸니 쉬운 문제였다
	if (strstr(search, b) != NULL) {
		printf("1");
	}
	else {
		printf("0");
	}
	
	return 0;
} 