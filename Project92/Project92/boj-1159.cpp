//boj-1159
//농구 경기

//알파벳을 배열에 저장 cnt 시킨 후 5개가 넘어가면 해당 알파벳 사전순으로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//배열member를 입력 받고 첫 글자를 다른 배열에 저장 or
//배열member를 입력 받고 int형 배열에 cnt후 저장 v


int main(void) {
	char member[40];
	int arr[26], n = 0, cnt = 0;

	scanf("%d", &n);

	//arr의 배열들 0으로 초기화
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%s", member);

		//arr[member배열의 맨 처음 글자만 알파벳 순서대로 저장]; 
		// ex) a = 0 , b = 1 ... z = 25
		arr[member[0] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			printf("%c", i + 97); //소문자 아스키코드 값 만큼 추가더해서 알파벳 출력
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("PREDAJA");
	}

	return 0;
}
  