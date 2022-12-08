//baekjoon-1264 모음의 개수


//모음 a e i o u 의 개수를 세는 문제
//각 줄 마다 영어 대소문자, , . ! ? 공백으로 이루어진 문장이 주어진다. 각 줄은 최대 255글자로 이루어져 있다.
//입력의 끝에는 한 줄에 # 한 글자만이 주어진다.

#include <stdio.h>
#include <string.h>

int main(void) {
		char arr[255];

	while (1) {
		int count = 0;
		
		gets_s(arr);
		int len = strlen(arr);

		if (arr[0] == '#') {
			break;
		}

		for (int i = 0; i < len; i++) {

			if (arr[i] == 'a' || arr[i] == 'A')
				count++;
			else if (arr[i] == 'e' || arr[i] == 'E')
				count++;
			else if (arr[i] == 'i' || arr[i] == 'I')
				count++;
			else if (arr[i] == 'o' || arr[i] == 'O')
				count++;
			else if (arr[i] == 'u' || arr[i] == 'U')
				count++;
		}
		
		printf("%d\n", count);
	}
	return 0;
}