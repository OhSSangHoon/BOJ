//bo j-1408
//24


//�ð� ���ϴ� ����
//������� ���´� XX:XX:XX
//
//���� �ð� < �ӹ� �ð� = �ӹ��ð� - ���� �ð�
//���� �ð� > �ӹ� �ð� = 24 - ����ð�(���� - �ӹ�)
// 
//���� �� < �ӹ� �� = �ӹ� �� - ���� ��
//���� �� > �ӹ� �� = �ӹ� �� - ���� �� + 60 & �ӹ� �ð� - 1

//�ð��̱� ������ �� > �� > �� ������ �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int h1, h2, m1, m2, s1, s2;
	int th, tm, ts;

	scanf("%d:%d:%d", &h1, &m1, &s1);//���� �ð�
	scanf("%d:%d:%d", &h2, &m2, &s2);//�ӹ� ���� �ð�


	//��
	if (s1 <= s2) {
		ts = s2 - s1;
	}  
	else{
		ts = s2 - s1 + 60;
		m2--;
	}

	//��
	if (m1 <= m2) {
		tm = m2 - m1;
	}
	else {
		tm = m2 - m1 + 60;
		h2--;
	}


	//��
	if (h1 <= h2) {
		th = h2 - h1;
	}
	else {
		th = 24 + (h2 - h1); 
	}

	printf("%02d:%02d:%02d", th, tm, ts);

	return 0;
}