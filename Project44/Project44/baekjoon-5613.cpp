//baekjoon-5613
//��� �߾Ӱ� ����

//A,B�� �Է��� �� ��հ� �߾Ӱ��� ���� ����� ���� ���� ���� C�� ã�ƶ�.

//c = (a * 2) - b

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;

    while (1) {

        scanf("%d %d", &a, &b);

        if (a == '\0' && b == '\0')//a�� b�� �Ѵ� 0�̸� while�� Ż��
            break;

        c = (a * 2) - b; //c�� a * 2 - b���̴�.

        printf("%d\n", c);
    }
    return 0;
}