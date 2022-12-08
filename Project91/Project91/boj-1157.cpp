//boj-1157
//단어 공부

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	char alp[1000000];
	int count[52]; //소문자 a-z(26) 대문자A-Z(26)
	int len = 0, i = 0, max = 0, index = 0, cnt = 0;

	for (int i = 0; i < 52; i++) {
		count[i] = 0;
	}

	//문자열을 입력 후 엔터키 입력하여 종료
	while (scanf("%[^\n]", alp)) {

		if (alp[i] == '\0')
			break;
		i++;
	}

	len = strlen(alp);

	//문자열의 길이 만큼 돌려서 같은 수 찾기 
	for (int i = 0; i < len; i++) {
		//대문자 A-Z
		for (int j = 65; j <= 90; j++) {
			if (alp[i] == j) {
				count[j - 65] = count[j - 65] + 1;
			}
		}
		//소문자a-z
		for (int j = 97; j <= 122; j++) {
			if (alp[i] == j) {
				count[j - 71] = count[j - 71] + 1;
			}
		}
	}

	//대 소문자 count통합
	for (int i = 0; i < 26; i++) {
		count[i] = count[i] + count[i + 26];
	}

	/*s
	for (int i = 0; i < 26; i++){
		printf("%d ", count[i]);
	}
	*/


	for (int i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
			index = i;
		} 
	}

	//알파벳 사용된 횟수 찾기
	for (int i = 0; i < 26; i++) {
		if (count[i] == max) {
			cnt++;
		}
	}

	if (cnt > 1) {
		printf("?");
	}
	else {
		printf("%c", index + 65);//대문자로 출력
	}


	return 0;
}