//boj-1100
//го╬А д╜

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cnt = 0;

	char arr[9][9];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = '0';
		}
	}


	for (int i = 0; i < 8; i++) {
		for(int j =0; j < 9; j++){
			scanf("%c", &arr[i][j]);
		}
	}

/*
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%c", arr[i][j]);
		}
	}
*/
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				if (arr[i][j] == 'F')
					cnt++;
			}
			else if (i % 2 == 1 && j % 2 == 1) {
				if (arr[i][j] == 'F')
					cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}