//baekjoon-3047��
//ABC


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� �� A,B,C�� �ִ�. A < B, B < C�̴�.
//�Է¿��� �־��� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void) {
    int a, b, c, max = 0;
    char arr[4];

    scanf("%d %d %d", &a, &b, &c);


    //�Է��� a b c�� �������� �����Ѵ�.
    for (int i = 0; i < 3; i++) {
        if (a > b) {
            max = a;
            a = b;
            b = max;
        }
        else if (b > c) {
            max = b;
            b = c;
            c = max;
        }
    }
    //"ABC"�Է�
    scanf("%s", arr);

    for (int i = 0; i < 3; i++) {
        if (arr[i] == 'A') {//A�� �������� �� �ڸ��� a���
            printf("%d ", a);
        }if (arr[i] == 'B') {//B�� �������� b���
            printf("%d ", b);
        }if (arr[i] == 'C') {//C�� �������� c���
            printf("%d ", c);
        }
    }


    return 0;
}