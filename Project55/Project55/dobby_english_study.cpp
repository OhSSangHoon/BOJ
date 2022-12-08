//baekjoon-2386
//dobby's english study


//소문자와 대문자 간의 10진값은 32 차이

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

        //arr[1]부터 확인 시킴
        for (int i = 1; i <= len; i++) {
            //alphabet이 대문자인지 소문자인지 확인
            if ('A' <= alphabet && alphabet <= 'Z') {
                if (arr[i] == alphabet || arr[i] == alphabet + 32) {//대문자는 소문자로 변경
                    count++;
                }
            }
            else if ('a' <= alphabet && alphabet <= 'z') {
                if (arr[i] == alphabet || arr[i] == alphabet - 32) {//소문자는 대문자로 변경
                    count++;
                }
            }
        }

        printf("%c %d\n", alphabet, count);
    }
    return 0;
}