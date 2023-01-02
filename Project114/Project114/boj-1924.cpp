//boj-1924
//2007년

//1,3,5,7,8,10,12 31일
//2 28일
//4,6,9,11 30일
//1월 1일은 월요일이다


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char week[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month = 0, day = 0;

	scanf("%d %d", &month, &day);


	for(int i = 0; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			day += 31;
		}
		else if (i == 2) {
			day += 28;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			day += 30;
		}

		//일 을 요일(7요일)로 나눈 나머지 = week의 요일이 된다
		day %= 7;
	}

	for (int i = 0; i < 3; i++) {
		printf("%c", week[day][i]);
	}


	return 0;
}