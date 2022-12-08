//baekjoon-2789
//유학금지


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

    char cambridge[10] = { 'C','A','M','B','R','I','D','G','E' };
    char str[100];

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) { //입력 문자의 길이 만큼 반복
        for (int j = 0; j < strlen(cambridge); j++) { //cambridge반복
            if (str[i] == cambridge[j]) //str[i]의 값과 cambridge[j]의 값이 같다면
                str[i] = '\0';//해당 배열에 값을 없앤다.
        }
        if (str[i] != '\0')//만약 str[i]의 값이 빈칸이 아니라면
            printf("%c", str[i]); //출력
    }
    return 0;
}