//baekjoon-1316
//�׷� �ܾ� üĿ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//�ܾ� �Է��� �迭�� �� ��ŭ for�� ����
// �迭�� ���� 'A'���� ũ�ų� ����, 'Z'���� �۰ų� ���ٸ�,
//�ҹ��ڷ� ����
// �迭�� ���� 'a'���� ũ�ų� ����, 'z'���� �۰ų� ���ٸ�,
//�빮�ڷ� ����

int main(void) {
    char arr[100];
    int ch = 0, len = 0;
    char newarr[100];

    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 'a' - 'A'; //�빮�ڸ� �ҹ��ڷ� �ٲٱ� ���� �Է¹��� ���ڿ� 'a'-'A'�� ���Ѵ�. (�ҹ��ڴ� �ݴ�� ���ָ� �ȴ�.)
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 'a' - 'A';
        }
        printf("%c", arr[i]);
    }

    return 0;
}