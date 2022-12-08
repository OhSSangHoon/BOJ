//boj-16435
//스네이크 버드


//반복문을 돌려서 뱀의 길이와 같은 수가 있으면 + 1씩추가 최종 뱀의 길이 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0, l=0; //과일의 개수 n , 뱀새의 길이 l
	int temp;

	scanf("%d %d", &n, &l);
	
	int* h = (int*)malloc(sizeof(int)* n); //과일의 높이 h

	for (int i = 0; i < n; i++) {
		scanf("%d", &h[i]);

	}

	//h[i]를 오름차순 정렬 한다
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (h[i] > h[j]) {
				temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}
		}
		//뱀의 길이가 높이보다 크거나 같다면
		if (l >= h[i]) {
			l++;//증가시켜준다
		}
	}
	printf("%d", l);

	return 0;
}