//baekjoon-2754
//��������

//� ����� c��� ������ �־����� ��, ������ �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char credit[3] = { 0, };
    int len = strlen(credit);


    scanf("%s", credit);

    if (credit[0] == 'A') {
        if (credit[1] == '+') {
            printf("4.3");
        }
        else if (credit[1] == '0') {
            printf("4.0");
        }
        else if (credit[1] == '-') {
            printf("3.7");
        }
    }
    else if (credit[0] == 'B') {
        if (credit[1] == '+') {
            printf("3.3");
        }
        else if (credit[1] == '0') {
            printf("3.0");
        }
        else if (credit[1] == '-') {
            printf("2.7");
        }
    }
    else if (credit[0] == 'C') {
        if (credit[1] == '+') {
            printf("2.3");
        }
        else if (credit[1] == '0') {
            printf("2.0");
        }
        else if (credit[1] == '-') {
            printf("1.7");
        }
    }
    else if (credit[0] == 'D') {
        if (credit[1] == '+') {
            printf("1.3");
        }
        else if (credit[1] == '0') {
            printf("1.0");
        }
        else if (credit[1] == '-') {
            printf("0.7");
        }
    }
    else if (credit[0] == 'F') {
        printf("0.0");
    }
    return 0;
}