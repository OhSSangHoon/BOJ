//baekjoon-4458
//첫 글자를 대문자로

//첫째 줄에 줄의 수 n이 주어진다, n개의 줄에는 문장이 주어진다, 문장의 글자의 수는 30을 넘지 않는다.


// %s 문자열출력, %c하나의 문자로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, count = 0;
    char arr[30];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        while (count < n) {

            getchar() != '\n'; //엔터키 입력을 배열에 저장하지 않는다??(엔터키 입력을 받지 않음)
            scanf("%[^\n]s", arr);//엔터키를 제외한 모든 입력을 저장(공백 포함)

            //0번째 배열의 값이 소문자 a-z라면 대문자로 변경
            if (arr[0] >= 'a' && arr[0] <= 'z') {
                arr[0] -= 32;
            }
            printf("%s\n", arr);//출력
            count++;//while문 break를 위한 count증가
        }
     }
    return 0;
}