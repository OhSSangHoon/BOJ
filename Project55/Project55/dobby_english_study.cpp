//baekjoon-2386
//dobby's english study


//�ҹ��ڿ� �빮�� ���� 10������ 32 ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[251] = { 0, }, alphabet = { 0, };

    while (1) {
        int len = 0, count = 0, temp = 0;
        
        
        scanf("%[^\n]s", arr);

        getchar() != '\n';

        if (arr[0] == '#')
            break;
         
        alphabet = arr[0];
        
        len = strlen(arr);

        //arr[1]���� Ȯ�� ��Ŵ
        for (int i = 1; i <= len; i++) {
            //alphabet�� �빮������ �ҹ������� Ȯ��
            if ('A' <= alphabet && alphabet <= 'Z') {
                if (arr[i] == alphabet || arr[i] == alphabet + 32) {//�빮�ڴ� �ҹ��ڷ� ����
                    count++;
                }
            }
            else if ('a' <= alphabet && alphabet <= 'z') {
                if (arr[i] == alphabet || arr[i] == alphabet - 32) {//�ҹ��ڴ� �빮�ڷ� ����
                    count++;
                }
            }
        }

        printf("%c %d\n", alphabet, count);
    }
    return 0;
}