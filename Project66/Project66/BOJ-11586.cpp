//boj-11586
//마법 거울

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//3 - 상/하반전, 2 - 좌우반전, 1 - 그대로

int main(void) {
	int t = 0, n = 0;

	scanf("%d", &t);

	char arr[100][100];

	for (int i = 0; i < t; i++) {
		scanf("%s", arr[i]);
	}  

	scanf("%d", &n);

	if(n == 1){
		for(int i =0; i < t; i++){
			for(int j =0; j < t; j++){
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}
	else if (n == 2) {
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < t; j++) {
				printf("%c", arr[i][t-1-j]); //좌우 반전
			}
			printf("\n");
		}
	}
	else if (n == 3) {
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < t; j++) {
				printf("%c", arr[t-1-i][j]); //상하 반전
			}
			printf("\n");
		}
	}
	
	return 0;
}