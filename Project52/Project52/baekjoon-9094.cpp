//baekjoon-9094��
//������ ȣ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� ���� n�� m�� �־����� ��, 0 < a < b < n�� ���� �� (a, b) �߿���
//(a2+b2+m)/(ab)�� ������ ���� ������ ���Ͽ���

//�����⸦ �������θ� �ٲپ� �ָ� �Ǵ� ����

int main(void) {
	int t = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int m = 0, n = 0;
		int a = 0, count = 0;

		scanf("%d %d", &n, &m);

		//1���� n-1���� for�� ����
		for (int j = 1; j <= n; j++) {
			int b = 0;

			a++; //a�� ����
			
			b = a; //b�� a�� ����

			//k = b���� n-1���� for�� ����
			for (int k = b; k < n-1; k++) {
				b++;//b�� ����

				//a^2+b^2+m �� a*b �� ���� �������� 0�̶�� (����)
				if (((a * a) + (b * b) + m) % (a * b) == 0) {
					//count����
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}