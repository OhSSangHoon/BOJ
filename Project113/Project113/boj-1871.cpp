//boj-1871
//���� �ڵ��� ��ȣ��

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

			//value_a = �����ڸ� ���ڷ� ��ȯ  pow�� �Ἥ 26�� ���� 2, 1, 0 ��
			//�ƽ�Ű�ڵ尪 - 65�� �����ش�
			value_a += (car[j] - 65) * pow(26, 3-j-1);
		}
		//atoi�� �ּҰ��� �޾Ƽ� \0�� ���ö� ���� ��ȯ�Ѵ�.
		//�׷��� car[4]�� �ƴ� �տ� &�� ���� car�� �ּҸ� �� �� �ֵ��� ���ش�.
		//car�� ������ �� ������� &�� ����� �ʿ䰡 ����.
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