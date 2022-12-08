//boj-20361
//일우는 야바위꾼

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//배열을 사용하니까 assertionfailed오류가 발생하길래 배열을 사용하지 않고 다르게 풀었다.
int main(void) {
    int n, x, k;
    int a, b;

    scanf("%d %d %d", &n, &x, &k);

    for (int i = 0; i < k; i++) {
        scanf("%d %d", &a, &b);

        if (a == x) { //a가 x와 같다면
            x = b; //x를 B로 바꾸는 것 이므로 x=b
        }
        else if (b == x) {
            x = a;
        }
    }

    printf("%d", x);

    return 0;
}