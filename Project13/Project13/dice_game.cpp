//baekjoon-2476
//주사위 게임


//1. 같은 눈이 3개가 나오면 10,000 + (같은 눈의 값) * 1,000  ex) 6 6 6 이면, 10,000 + 6,000
//2. 같은 눈이 2개가 나오면 1,000 + (같은 눈의 값) * 100
//3. 모두 다른 눈이 나오는 경우 (가장 큰 눈) * 100


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    int sum = 0;
    int a = 0, b = 0, c = 0;//주사위 a ,b , c
    int max = 0, max1 = 0; //가장 큰 주사위의 눈 max , 가장 많은 상금 max1

    scanf("%d", &num);//주사위를 굴릴 횟수 입력

    for (int i = 0; i < num; i++) {
        scanf("%d %d %d", &a, &b, &c);//주사위 눈의 값 입력

        if (a == b && b == c) { //a b c가 같을 떄
            sum = 10000 + (a * 1000);
        }
        else if (a == b) { //a b가 같을 때
            sum = 1000 + (b * 100);
        }
        else if (a == c) { //a c가 같을 때
            sum = 1000 + (c * 100);
        }
        else if (b == c) { //b c가 같을 때
            sum = 1000 + (c * 100);
        }

        if (a != b && b != c && a != c) { //a b c가 서로 다를 때
            if (a > b && a > c) {
                max = a; //max 에 a값을 대입
            }
            else if (b > a && b > c) {
                max = b; //b값을 대입
            }
            else if (c > b && c > a) {
                max = c; //c값을 대입
            }
            sum = max * 100; //sum = 가장큰 눈 * 100
        }
        if (sum > max1) { //가장 큰 상금 구하기 sum이 max1보다 클 때
            max1 = sum; //max1에 가장 큰 상금값 대입
        }
    }
    printf("%d\n", max1);

    return 0;
}