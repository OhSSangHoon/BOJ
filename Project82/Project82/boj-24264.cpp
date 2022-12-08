//boj-24264
//algorithm의 수행 시간 2


/*
MenOfPassion(A[], n) {
    sum < -0;
    for i < -1 to n
        for j < -1 to n
            sum < -sum + A[i] × A[j]; # 코드1
            return sum;
}
*/

//시간복잡도 O(n^2)를 가진다
//2차 복잡도 라고 부르며, 입력값이 증가함에 따라 시간이 n의 제곱만큼 증가한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long long n = 0, sum = 0;
    scanf("%d", &n);

    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            sum++;
        }
    }

    printf("%lld\n", sum);
    printf("2\n");

    return 0;
}