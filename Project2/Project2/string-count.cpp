//baekjoon 1152

//문자열의 개수를 맞추는 문제
//맨앞과 맨뒤에 공백이 올 수 있다. 연속해서 공백을 사용하지 못한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000000];
	int len; //문자열 길이
	int count = 0;

	scanf("%[^\n]", arr); //문자 입력

	len = strlen(arr);
	

	//공백 개수 찾기
	for (int i = 1; i < len-1; i++) {
		//문자열에 공백이 있을 시
		if (arr[i] == ' ') {
			count++; //cnt ++
		}
	}

	//공백만 입력했을 때
	if (len == 1) {
		if (arr[0] = ' ') {
			printf("0\n");
			return 0;
		}
	}

	//문자열은 공백 + 1 이므로, count + 1로 출력
	printf("%d\n", count + 1);

}