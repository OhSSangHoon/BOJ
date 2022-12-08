//baekjoon-6322
//���� �ﰢ���� �� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//a,b,c �� �� �Է��Ѵ�. 
//a,b,c �� �ϳ��� -1�̸�, -1�� �� �� ���� ���� �����̴�.
//�ٸ� �� ���� 10,000���� �۰ų� ���� �ڿ����̴�.

//�Է��� ������ �ٿ��� 0�� �� �� �־�����.

//��Ʈ�Լ� sqrt�� ���ؼ� ���� �Ǿ���.

int main(void) {
		int i = 0;
		int tri[4];
		double triangle = 0;

	while (1) {
		
		scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);

		if (tri[0], tri[1], tri[2] == '\0'){
			break;
		}

		if (tri[0] == -1) { //a == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[2] * tri[2]) - (tri[1] * tri[1]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}
			else {
				printf("a = %.3lf\n\n", sqrt(triangle));
			}
		}
		else if (tri[1] == -1) { //b == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[2] * tri[2]) - (tri[0] * tri[0]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}
			else {
				printf("b = %.3lf\n\n", sqrt(triangle));
			}

		}
		else if (tri[2] == -1) { //c == -1
			i++;
			printf("Triangle #%d\n", i);
			triangle = (tri[0] * tri[0]) + (tri[1] * tri[1]);
			if (triangle <= 0) {
				printf("Impossible.\n\n");
			}else{
				printf("c = %.3lf\n\n", sqrt(triangle));
			}
		}
	}
	return 0;
}