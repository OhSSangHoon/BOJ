//boj-24264
//algorithm�� ���� �ð� 2


/*
MenOfPassion(A[], n) {
    sum < -0;
    for i < -1 to n
        for j < -1 to n
            sum < -sum + A[i] �� A[j]; # �ڵ�1
            return sum;
}
*/

//�ð����⵵ O(n^2)�� ������
//2�� ���⵵ ��� �θ���, �Է°��� �����Կ� ���� �ð��� n�� ������ŭ �����Ѵ�.

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