//baekjoon-2490
//������

//��(0) ��(1)�� ������ ���ڸ� ����
//��, ��, ��, ��, �� �����Ѵ�.
//
//��(0 1 1 1), ��(0 0 1 1), ��(0 0 0 1), ��(0 0 0 0), ��(1 1 1 1)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int yut[4]={0,};
	

	for(int i =0; i < 3; i++){
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[j]);//�� �Է�
			sum += yut[j];//�Է� �� ����
			
		}
		//printf("%d\n", sum);
		if (sum == 3) {
			printf("A\n");//��
		}else if(sum == 2){
			printf("B\n");//��
		}
		else if (sum == 1) {
			printf("C\n");//��
		}
		else if (sum == 0) {
			printf("D\n");//��
		}
		else if (sum == 4) {
			printf("E\n");//��
		}
	}
	return 0;
}