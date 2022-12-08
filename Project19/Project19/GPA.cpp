//baekjoon-10984 
//내 학점을 구해줘

//학기T 입력 / 과목N 입력 / 학점C와 성적G입력 
//학점은 전부 더함 // 성적은 더한 과목만큼 나눔


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t = 0, n = 0, c = 0;
	

	scanf("%d", &t);//학기

	for (int i = 0; i < t; i++) {
		int sum = 0;
		double g = 0, gpa = 0, mul = 0;
		scanf("%d", &n);//과목
		for (int j = 0; j < n; j++) {
			scanf("%d %lf", &c, &g);//학점 , 성적
			sum += c; //총학점 sum

			mul += c * g;
			gpa = (mul) / sum; //평점을 구하는 식
		}
		printf("%d %.1lf\n", sum, gpa);
		
	}
	return 0;
}