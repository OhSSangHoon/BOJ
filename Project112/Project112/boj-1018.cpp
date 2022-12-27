//boj-1018
//체스판 다시 칠하기

#define _CRT_SECURE_NO_WARNINGS
#define find(a,b) a < b ? a : b //b가 a보다 크다면 a 반환, 작다면 b 반환
#include <stdio.h>

int main(void) {
	char chess[51][51];
	int n, m, min = 100;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", chess[i]);
	}
	
	//8*8정사각형을 행 과 열 한칸씩 이동
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int cntB = 0, cntW = 0;

			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					//행과 열의 합이 짝수라면 (흰색)
					if ((k + l) % 2 == 0) {
						if (chess[k][l] == 'B') {
							cntW++;
						}
						else {
							cntB++;
						}
					}
					//아닐 시 (행과 열의 합이 홀수 (검은색))
					else {
						if (chess[k][l] == 'B') {
							cntB++;
						}
						else {
							cntW++;
						}
					}
				}
			}
			//조건연산자 실행 검은색일때와 흰색일때 최솟값 탐색
			min = find(min, cntB);
			min = find(min, cntW);
		}
	}
	//최솟값 출력
	printf("%d", min);

	return 0;
};

//문제가 이해하는데 꽤나 오랜시간이 걸렸다
//8*8 범위의 배열을 하나 만들어 거기에 'B'를 확인 하는 방법을 사용했다.
//행+열의 값이 짝수라면 흰색 홀수라면 검은색인 것을 이용했다.
// 
//그래서 행과 열의 값을 2로 나누어 나머지가 0일 때(흰색)
//해당 칸에 B가 있다면 다시 칠해야하기 때문에 W를 증가시켜주었고
//B가 아니라면 B를 증가시켜주었다.
//
//검은색 일땐 반대로 증가 시켜주었다.
//
//그다음 비교식 조건연산자를 만들어 a < b ? a : b
// 검은색과 흰색 둘다 비교하였고 그 중 가장 최소값을 구하도록 하였다.