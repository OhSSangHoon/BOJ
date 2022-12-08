#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 요원명은 알파벳 대문자, 숫자, 대시(-)로만 이루어져 있다.
//FBI의 첩보명은 'FBI'가 필수로 들어가있다.


int main(void) {
    char agent[5][11]; //요원명은 최대 10글자
    int fbi[5] = { 0, }, cnt = 0, len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", agent[i]);

        len = strlen(agent[i]);

        for (int j = 0; j < len; j++) {
            //요원명 에서 FBI가 연속으로 포함되어있는지 확인
            if (agent[i][j] == 'F' && agent[i][j + 1] == 'B' && agent[i][j + 2] == 'I') {
                fbi[i] = i + 1; //배열의 시작이 0이 되지 않게 하기 위한 +1을 해준다.
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (fbi[i] != 0) {
            printf("%d ", fbi[i]);
            cnt++; //FBI요원이 있는지 없는지 확인 해주도록
        }
    }

    if (cnt == 0) {
        printf("HE GOT AWAY!");
    }
    return 0;
}