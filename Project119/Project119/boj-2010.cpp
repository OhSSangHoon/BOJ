//boj-2010
//플러그

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int tab, n;
	int sum = 0;

	scanf("%d", &n);

	//멀티탭의 개수 - 1 = 멀티탭에 이중 연결하는 멀티탭의 수
	int use = n - 1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &tab);
		
		//모든 멀티탭의 플러그의 개수
		sum += tab;
	}


	//모든 멀티탭의 플러그의 개수 - 이중 연결하는 멀티탭의 수
	//(이미 사용중인 플러그) = 최대로 전원에 연결될 수 있는 컴퓨터의 수
	printf("%d", sum - use);

	return 0;
}