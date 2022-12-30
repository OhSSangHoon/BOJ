//boj-1871
//좋은 자동차 번호판

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	
	int n = 0;
	
	scanf("%d", &n);

	for(int i =0; i < n; i++){

		int value_a = 0;
		int value_b = 0;
		char car[10];

		scanf("%s", car);

		
		for(int j =0; j < 3; j++) {

			//value_a = 영문자를 숫자로 변환  pow를 써서 26의 제곱 2, 1, 0 을
			//아스키코드값 - 65에 곱해준다
			value_a += (car[j] - 65) * pow(26, 3-j-1);
		}
		//atoi가 주소값을 받아서 \0이 나올때 까지 변환한다.
		//그래서 car[4]가 아닌 앞에 &를 붙혀 car의 주소를 알 수 있도록 해준다.
		//car이 포인터 형 변수라면 &을 사용할 필요가 없다.
		value_b = atoi(&car[4]);
		
		if (abs(value_a - value_b) <= 100) {
			printf("nice\n");
		}
		else {
			printf("not nice\n");
		}
	}


	return 0;
};