//baekjoon-2789
//���б���


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

    char cambridge[10] = { 'C','A','M','B','R','I','D','G','E' };
    char str[100];

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) { //�Է� ������ ���� ��ŭ �ݺ�
        for (int j = 0; j < strlen(cambridge); j++) { //cambridge�ݺ�
            if (str[i] == cambridge[j]) //str[i]�� ���� cambridge[j]�� ���� ���ٸ�
                str[i] = '\0';//�ش� �迭�� ���� ���ش�.
        }
        if (str[i] != '\0')//���� str[i]�� ���� ��ĭ�� �ƴ϶��
            printf("%c", str[i]); //���
    }
    return 0;
}