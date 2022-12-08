//baekjoon-1864 
//���� ����

//��Ģ
//
//n���� ���ڸ� �Է��ϸ�
//�Ŀ��� 8^n-1 .. 8^n .. �̷������� 
//
//ex) (@& �� �Է��ߴ�
//�׷��ٸ� 2 * 8^3 + 3 * 8^2 + 6 * 8 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char num[8];

    while (scanf("%s", num) != '#') { //num�ݺ� �Է� #�Է� �� Ż�� 
        if (num[0] == '#')
            break;

        int len = strlen(num);

        int i = 0, oct = 0, a;

        while (len != 0) { //len���� 0�� �Ǹ� Ż��
            char str = num[i];
            switch (str) {
            case '-':
                a = 0;
                break;
            case '\\':
                a = 1;
                break;
            case '(':
                a = 2;
                break;
            case '@':
                a = 3;
                break;
            case '?':
                a = 4;
                break;
            case '>':
                a = 5;
                break;
            case '&':
                a = 6;
                break;
            case '%':
                a = 7;
                break;
            case '/':
                a = -1;
                break;
            default:
                break;
            }
            oct += a * pow(8, (len - 1)); //������ �����ִ� pow�Լ��� ����Ͽ�
            //����oct�� �Է°� a * 8^n���� ���� ��� �����ش�
            len--; //len�� ����
            i++; //i�� ����
        }
        printf("%d\n", oct);
    }

    return 0;
}