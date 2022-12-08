//baekjoon-5704
//fangram

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char fan[200] = { 0, };



    while (scanf("%[^\n]s", fan)) {
        getchar(); //����Ű�� �Է¹��� ����

        int len = 0;
        int count[26] = { 0, }, sum = 0;


        //*�Է� �� while�� Ż��
        if (fan[0] == '*')
            break;

        len = strlen(fan);


        for (int i = 0; i < len; i++) {
            //�Է��� ���ڿ��� ���̸�ŭ a���� z���� Ȯ��
            if (fan[i] >= 'a' && fan[i] <= 'z') {
                //a-z�� �ִٸ� a == count[0].. ������� 1�� ����
                count[fan[i] - 'a'] = 1;
            }
        }
        //���ĺ��� ���� 26����ŭ for�� ����
        for (int i = 0; i < 26; i++) {
            //printf("%d ", count[i]);
            //count�� ���� ���� ���Ѵ�
            sum += count[i];
        }
        //�ұ׷��̶�� 26�� ���� ��
        if (sum == 26) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
        //sum �ʱ�ȭ
        sum = 0;
    }

    return 0;
}