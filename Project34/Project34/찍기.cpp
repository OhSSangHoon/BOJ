//baekjoon-2966
//���


//����̴� [A,B,C]Adrian, â���̴� [B,A,B,C]Bruno, �����̴� [C,C,A,A,B,B]Goran

//�������� if���� ����� �� else if�� if�� �� �����ϰ� ����ؾ��Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char A[100] = { 0, }, B[100] = { 0, }, C[100] = { 0, };
	char exam[100] = { 0, };
	
	int n = 0, max = 0;
	int a = 0, b = 0, c = 0;

	scanf("%d", &n);

	//A,B,C,A,B,C - - - 3���� �ݺ�
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0) {
			A[i] = 'A';
		}
		else if (i % 3 == 1) {
			A[i] = 'B';
		}
		else {
			A[i] = 'C';
		}
	}

	//B,C,B,A - - - - 4���� �ݺ�
	for (int i = 0; i < n; i++) {
		if (i % 4 == 0) {
			B[i] = 'B';
		}
		else if (i % 4 == 1) {
			B[i] = 'A';
		}
		else if(i % 4 == 2) {
			B[i] = 'B';
		}
		else {
			B[i] = 'C';
		}
	}

	//C,C,A,A,B,B - - - - - - 6���� �ݺ�
	for (int i = 0; i < n; i++) {
		if (i % 6 == 0 || i % 6 == 1) {
			C[i] = 'C';
		}
		else if (i % 6 == 2 || i % 6 == 3) {
			C[i] = 'A';
		}
		else if(i % 6 == 4 || i % 6 == 5) {
			C[i] = 'B';
		}
	}

	scanf("%s", exam);

	for (int i = 0; i < n; i++) {
		if (exam[i] == A[i]) {
			a++ ;
		}
		if (exam[i] == B[i]) {
			b++;
		}
		if (exam[i] == C[i]) {
			c++;
		}
	}

	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if(max < c) {
		max = c;
	}
	/*
	for (int i = 0; i < n; i++) {
		printf("%c", A[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%c", B[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%c", C[i]);
	}
	printf("\n");

	printf("%d %d %d\n", a, b, c);//���� ���� ���� ������ ��

	*/

	printf("%d\n", max);
	
	
	if (max == a) {
		printf("Adrian\n");
	}
	if (max == b) {
		printf("Bruno\n");
	}
	if (max == c) {
		printf("Goran\n");
	}

	return 0;
}