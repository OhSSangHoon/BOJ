//baekjoon-4458
//ù ���ڸ� �빮�ڷ�

//ù° �ٿ� ���� �� n�� �־�����, n���� �ٿ��� ������ �־�����, ������ ������ ���� 30�� ���� �ʴ´�.


// %s ���ڿ����, %c�ϳ��� ���ڷ� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, count = 0;
    char arr[30];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        while (count < n) {

            getchar() != '\n'; //����Ű �Է��� �迭�� �������� �ʴ´�??(����Ű �Է��� ���� ����)
            scanf("%[^\n]s", arr);//����Ű�� ������ ��� �Է��� ����(���� ����)

            //0��° �迭�� ���� �ҹ��� a-z��� �빮�ڷ� ����
            if (arr[0] >= 'a' && arr[0] <= 'z') {
                arr[0] -= 32;
            }
            printf("%s\n", arr);//���
            count++;//while�� break�� ���� count����
        }
     }
    return 0;
}