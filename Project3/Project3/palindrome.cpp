//baekjoon - 1259
//palindrome number

//어떤 단어를 뒤에서부터 읽어도 똑같다면 그 단어를 팰린드롬이라고 한다. 'radar', 'sees'등
//수의 숫자들도 뒤에서부터 읽어도 같다면 그 수는 팰린드롬수이다. //12321, 121 등

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//문자열을 입력받는다 문자열 입력값len 만큼 for문을 실행 시킨다.
//앞의 값과 뒤의 값을 대조하여 똑같으면 yes 틀리면 no를 출력



int main(void) {
	char str[10000];
	int len;
	int check;


	while (gets_s(str) && str[0] != '0') {
		//printf("%s\n", str);
		len = strlen(str);
		check = 1;
		for (int i = 0; i < len; i++) {
			//str 값 str의 거꾸로 값이 틀리면
			if (str[i] != str[len - 1 - i]) {
				check = 0; //check = 0 후 while문 탈출
				break;
			}
		}
		if (check == 1) {
			printf("yes\n");
		}else
			if (check == 0) {
				printf("no\n");
		}

		if (str[0] == '0')
			break;
	}
}