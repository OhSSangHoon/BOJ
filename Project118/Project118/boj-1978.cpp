//boj-1978
//소수 찾기


//소수 2,3,5,7 ... 1과 자기 자신만 있는 수
//1은 소수가 아니다

//에라토스테네스의 체 사용
//2보다 크면서 자기 자신의 제곱근까지의 수에 나눠지지 않는 수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int cnt = n;
	
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		//1은 소수가 아니기 때문에 빼준다.
		if (arr[i] == 1) {
			cnt--;
		}
	}

	for (int i = 0; i < n; i++) {
		//에라토스테네스의 체 2보다 크면서 제곱근까지의 수에 나눠지지 않는 수
		for (int j = 2; j <= sqrt(arr[i]); j++) {
			//나눠 진다면 빼준다.
			if (arr[i] % j == 0){
				cnt--;
				//0으로 나누어 지면 탈출
				//(cnt음수 방지 나머지가 0이 되는 수가 많을 수 있다.)
				break;
			}
		}
	}
	
	printf("%d", cnt);

	return 0;
}
