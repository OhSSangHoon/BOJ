//boj-1367
//뒤집힌 덧셈

//일의 자리 부터 천의자리까지 한자리씩 나눠서 구한다음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap(char* a, char* b) {
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

int rev(int n) {
	char s[100];
	
	sprintf(s, "%d", n); //정수 n을 문자열 s로 변환

	int len = strlen(s);
	
	for (int i = 0; i < len / 2; i++) {
		swap(&s[i], &s[len - i - 1]);//s[처음]→ ← s[끝] 서로 swap해준다
		//양 쪽에서 동시에 실행되기 때문에 문자열의 길이 / 2만큼만 실행해주면 된다.
		//문자열의 길이 만큼 실행하면 결국 제자리로 돌아가기 때문에
	}

	return atoi(s);//정수형으로 반환
}

int main(void) {
	int x, y;
	
	scanf("%d %d", &x, &y);

	int sum = rev(x) + rev(y); //sum 은 x와 y를 뒤집은 값의 합이다.
	//ex) x = 123 , y= 100 이라면 sum = 321 + 1 
	//sum = 322

	printf("%d", rev(sum));//sum의 rev값을 출력한다. //223

	return 0;
}