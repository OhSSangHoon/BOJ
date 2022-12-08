//baekjoon-5704
//fangram

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char fan[200] = { 0, };



    while (scanf("%[^\n]s", fan)) {
        getchar(); //엔터키를 입력받지 않음

        int len = 0;
        int count[26] = { 0, }, sum = 0;


        //*입력 시 while문 탈출
        if (fan[0] == '*')
            break;

        len = strlen(fan);


        for (int i = 0; i < len; i++) {
            //입력한 문자열의 길이만큼 a부터 z까지 확인
            if (fan[i] >= 'a' && fan[i] <= 'z') {
                //a-z가 있다면 a == count[0].. 순서대로 1씩 저장
                count[fan[i] - 'a'] = 1;
            }
        }
        //알파벳의 개수 26번만큼 for문 실행
        for (int i = 0; i < 26; i++) {
            //printf("%d ", count[i]);
            //count의 값을 전부 합한다
            sum += count[i];
        }
        //팬그램이라면 26이 나올 것
        if (sum == 26) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
        //sum 초기화
        sum = 0;
    }

    return 0;
}