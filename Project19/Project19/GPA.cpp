//baekjoon-10984 
//�� ������ ������

//�б�T �Է� / ����N �Է� / ����C�� ����G�Է� 
//������ ���� ���� // ������ ���� ����ŭ ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t = 0, n = 0, c = 0;
	

	scanf("%d", &t);//�б�

	for (int i = 0; i < t; i++) {
		int sum = 0;
		double g = 0, gpa = 0, mul = 0;
		scanf("%d", &n);//����
		for (int j = 0; j < n; j++) {
			scanf("%d %lf", &c, &g);//���� , ����
			sum += c; //������ sum

			mul += c * g;
			gpa = (mul) / sum; //������ ���ϴ� ��
		}
		printf("%d %.1lf\n", sum, gpa);
		
	}
	return 0;
}