//boj-1065
//�Ѽ�


//Tip. 1~99�� ��� ���� �����̴�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, cnt = 0, h, t, o;
	int a[4] = { 0, };

	scanf("%d", &n);

	

	//n�� 100���� ������ 0���� n���� count
	if (n < 100) {
		for (int i = 0; i < n; i++) {
			cnt++;
		}
	}
	//n�� 100���� ũ�ٸ� �⺻�� 99�� �ʱ�ȭ
	else {
		cnt = 99;
	}

	//�׸��� 100���� n���� �ݺ��ϸ鼭 �Ѽ��� ������ �����ش�.
	for (int i = 100; i <= n; i++) {
		h = i / 100; //100�� �ڸ�
		t = (i / 10) % 10; //10�� �ڸ�
		o = i % 10; //1�� �ڸ�

		if ((h - t) == (t - o)) {
			cnt++;
		}
	}

	printf("%d", cnt);


	return 0;
}