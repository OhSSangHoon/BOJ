//baekjoon-1371
//가장많은 글자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	char arr[500]; 
	char alpha[26] = { 0, };
	int cnt = 1;

	int len = strlen(arr);


	//while문 실행
	while (gets_s(arr)) {
		for (int i = 0; i < len; i++) {
			alpha[arr[i] - 97]++;

			//arr에 ^Z가 나오면 while문 탈출
			if (arr[i] == '^Z') {
				break;
			}
		}

	}

	
	for (int i = 0; i < 26; i++) {
		//배열 alpha 1~26까지 cnt와 비교
		if (alpha[i] >= cnt)
			//크거나 같다면 를 alpha에 대입
			cnt = alpha[i];
	}
	

	printf("가장 많이 사용된 글자는: ");
	for (int i = 0; i < 26; i++) {
		//같다면
		if (alpha[i] == cnt)
			//출력
			printf("%c ", 97 + i);
	}


}