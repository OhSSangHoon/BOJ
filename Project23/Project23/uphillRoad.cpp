//baekjoon-2846
//��������

//n ... n + m ���� �������� n + m �� ���� ���� n + m ���� �۴ٸ�, �������� ��.
//���������� ũ��� (n + m) - n
//12�� 6 ���� �������� x

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int num = 0, mount[1024];
    int max = 0, min = 0, up = 0, height = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &mount[i]); //������ �� ���� �Է�
    }

    for (int i = 0; i < num; i++) {
        //���������̶�� �ִ���̿��� �ּ� ���̸� �� ���� ����up�� ���Ѵ�.
        if (mount[i] < mount[i + 1]) {
            min = mount[i];
            max = mount[i + 1];
            up += max - min;
            //ex) 1 4 6 �̶��, 4-1 = 3(up�� ����) 6 - 4 = 2(up�� ����) up = 5

        }
        //���������� �ƴ϶�� up �ʱ�ȭ
        else {
            up = 0;
        }
        //�������� �� ���� ũ�Ⱑ ū ��������
        if (height < up) {
            height = up;
        }
    }
    printf("%d", height);
    return 0;
}