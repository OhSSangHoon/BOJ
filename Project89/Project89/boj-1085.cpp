//boj-1085
//���簢������ Ż��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y, w, h;
    int a, b, c, d;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    a = x;
    b = y;
    c = w - x;
    d = h - y;

    if (a < b && a < c && a < d) {
        printf("%d\n", a);
    }
    else if (b < c && b < d) {
        printf("%d\n", b);
    }
    else if (c < d) {
        printf("%d\n", c);
    }
    else {
        printf("%d\n", d);
    }
    return 0;
}