//boj-1735
//분수 합

//첫째 줄과 둘째 줄에, 각 분수의 분자와 분모를 뜻하는 두개의 자연수가 순서대로 주어진다.
// 2(분자) 7(분모)
// 3(분자) 5(분모)

//기약분수 : 분모와 분자가 1이외에는 공약수가 없는 분수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//유클리드 호제법 알고리즘
int gcd(int x, int y) {
    int z = 1;
    while (y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int main(void) {
    int a, b, c, d;
    int temp = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //분모의 곱을 사용하여 합을 구한다.
    //31 / 35
    int n = (a * d) + (c * b);
    int m = d * b;


    //그 후 분자와 분모의 최대공약수를 유클리드 호제법을 사용하여 구하고 분자와 분모를 최대공약수로 나누어 준다.
    int min = gcd(n, m);

    n /= min;
    m /= min;

    printf("%d %d %d", min, n, m);

    return 0;
}