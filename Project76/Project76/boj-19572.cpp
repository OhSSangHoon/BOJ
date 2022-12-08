//boj-19572
//°¡¹³

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double d[3];

    scanf("%lf %lf %lf", &d[0], &d[1], &d[2]);
    double a, b, c;

    b = (d[0] + d[2] - d[1]) / 2;
    c = d[2] - b;
    a = d[0] - b;

    if (a > 0 && b > 0 && c > 0) {
        printf("1\n%.1lf %.1lf %.1lf", a, b, c);
    }
    else {
        printf("-1\n");
    }
    return 0;
}