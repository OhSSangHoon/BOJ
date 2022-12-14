//boj-1475
//방 번호
//9와 6은 서로 뒤집어서 사용할 수 있다.
//if(arr[i] == 9 || arr[i] == 6) cnt / 2;로 출력 무조건 2세트

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[8] = { 0, };
	int check[10] = { 0, };
	int max = 0;

	scanf("%s", &arr);


	int len = strlen(arr);


	for (int i = 0; i < len; i++) {
		check[arr[i]-'0']++;
	}

	//6과 9는 서로 사용가능하기 때문에 2를 나누어서 서로에 넣어준다
	check[6] = (check[6] + check[9] + 1) / 2;

	//cnt의 최대값을 찾아서 출력한다.
	for (int i = 0; i < 9; i++) {
		if (max < check[i]) {
			max = check[i];
		}
		//printf("%d ", check[i]);
	}

	printf("%d", max);

	return 0;
}