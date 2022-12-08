//boj-25191
//치킨 한마리를 먹을때 반드시 집에 있는 콜라 2개나 맥주 1개와 같이 먹어야 한다.
//치킨집에 있는 치킨의 개수보다 치킨을 많이 시켜먹을 수는 없다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, a, b;
    int chi = 0;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    chi = (a / 2) + b;

    if (chi > n) {
        chi = n;
    }

    printf("%d\n", chi);
}