
//햄버거 만들기 baekjoon<25628>
//햄버거 빵 $A$개와 햄버거 패티 $B$개로 만들 수 있는 햄버거의 최대 개수는 얼마일까 ?
//단, 햄버거 빵은 위에 놓는 빵과 아래에 놓는 빵의 구분이 없으며, 남는 빵이나 패티가 있어도 된다.

#include <stdio.h>


//min : a 가 b 보다 작을때 참이면 a값 거짓이면 b값 사용
#define min(a,b) (a) < (b) ? (a) : (b)


int main(void) {
	int a, b = 0; //a = 빵, b = 패티
	scanf_s("%d %d", &a, &b);

	int c = min(a/2, b);  //c = min

	printf("%d", c); //출력 
}