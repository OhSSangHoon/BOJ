//baekjoon-1316
//그룹 단어 체커

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//단어 입력후 배열의 값 만큼 for문 실행
// 배열의 값이 'A'보다 크거나 같고, 'Z'보다 작거나 같다면,
//소문자로 변경
// 배열의 값이 'a'보다 크거나 같고, 'z'보다 작거나 같다면,
//대문자로 변경

int main(void) {
    char arr[100];
    int ch = 0, len = 0;
    char newarr[100];

    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 'a' - 'A'; //대문자를 소문자로 바꾸기 위해 입력받은 문자에 'a'-'A'를 더한다. (소문자는 반대로 빼주면 된다.)
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 'a' - 'A';
        }
        printf("%c", arr[i]);
    }

    return 0;
}