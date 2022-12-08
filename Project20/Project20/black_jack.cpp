//baekjoon-2798
//black jack

//카드장수 n과 값m이 주어진다
//그 중 합이 m을 넘지않으며, m에 최대한 가까운 카드 3장만 입력으로 주어지며
//그 중 가장 가까운 카드 3장의 합을 출력한다.

/*
   배열 c로 n장의 카드를 입력받고
   3개의 중첩 for문으로 카드m에 대한 3장의 카드 경우의 수를 알아낸다.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
    int n = 0, m = 0, sum = 0, max = 0;
    int c[101];//카드
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    //5 6 7 , 5 6 8 , 5 6 9 , 5 7 8 , 5 8 9 , 6 7 8 , 6 7 9 , 6 8 9 , 7 8 9 ···
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = c[i] + c[j] + c[k];
                //sum이 m보다 작거나 같고 sum이 max보다 크다면
                if (sum <= m && sum > max) {
                    max = sum;
                }
            }
        }

    }
    printf("%d", max);
    return 0;
}