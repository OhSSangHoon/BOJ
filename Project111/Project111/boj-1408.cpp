//bo j-1408
//24


//시간 구하는 문제
//입출력의 형태는 XX:XX:XX
//
//지금 시간 < 임무 시간 = 임무시간 - 지금 시간
//지금 시간 > 임무 시간 = 24 - 경과시간(지금 - 임무)
// 
//지금 분 < 임무 분 = 임무 분 - 지금 분
//지금 분 > 임무 분 = 임무 분 - 지금 분 + 60 & 임무 시간 - 1

//시간이기 때문에 초 > 분 > 시 순서로 계산함

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int h1, h2, m1, m2, s1, s2;
	int th, tm, ts;

	scanf("%d:%d:%d", &h1, &m1, &s1);//현재 시간
	scanf("%d:%d:%d", &h2, &m2, &s2);//임무 시작 시간


	//초
	if (s1 <= s2) {
		ts = s2 - s1;
	}  
	else{
		ts = s2 - s1 + 60;
		m2--;
	}

	//분
	if (m1 <= m2) {
		tm = m2 - m1;
	}
	else {
		tm = m2 - m1 + 60;
		h2--;
	}


	//시
	if (h1 <= h2) {
		th = h2 - h1;
	}
	else {
		th = 24 + (h2 - h1); 
	}

	printf("%02d:%02d:%02d", th, tm, ts);

	return 0;
}