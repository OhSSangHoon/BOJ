//baekjoon-5063
//TGN

//r은 광고를 하지 않았을 때 수익, e는 광고를 했을 때의 수익, c는 광고 비용
// 
//e - (r+c)을 해서 양수가 나오면 advertise 0이 나오면 does not matter 음수가 나오면 do not advertise 를 출력시킨다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n = 0;//test case
    int r = 0, e = 0, c = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int ad = 0;

        scanf("%d %d %d", &r, &e, &c);

        ad = e - (r + c);

        if (ad > 0) {
            printf("advertise\n");
        }
        else if (ad == 0) {
            printf("dose not matter\n");
        }
        else if (ad < 0) {
            printf("do not advertise\n");
        }
    }
    return 0;
}