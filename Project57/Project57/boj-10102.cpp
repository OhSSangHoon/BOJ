//baekjoon-10102
//개표

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0, a = 0, b = 0;

	scanf("%d", &n);

	//n만큼 동적할당
	char* arr = (char*)malloc(sizeof(int) * n);
	
	scanf("%s", arr);


	for(int i = 0; i < n; i++){
		// A 카운트
		if (arr[i] == 'A') {
			a++;
		}// B 카운트
		else if(arr[i] == 'B') {
			b++;
		}
	}
	if (a > b) {
		printf("A\n");
	}
	else if (a < b) {
		printf("B\n");
	}
	else {
		printf("Tie\n");
	}

	return 0;
}