//baekjoon-9501
//spaceship

//���ּ��� �ְ�ӵ� v, ���ᷮf, �ð��� ���� �Һ���c
//���ּ��� ����n, �����������ǰŸ� d

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t = 0;

	scanf("%d", &t);//�׽�Ʈ ���̽�

	for (int i = 0; i < t; i++) {
		int n = 0, d = 0, count = 0;

		scanf("%d %d", &n, &d);

		for (int j = 0; j < n; j++) {
			int v = 0, f = 0, c = 0;

			scanf("%d %d %d", &v, &f, &c);

			int val = v * f / c;//�ְ�ӵ� x ���ᷮ / �ð��� �Һ��� = �� �� �ִ� �ִ� �Ÿ�

			if (val >= d) { //�ִ�Ÿ��� ���������� ũ�ų� ���ٸ�

				count += 1;//����
			}
			//printf("%d\n", val);
		}
		printf("%d\n", count);
	}
	return 0;
 }