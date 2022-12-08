// boj-10409
// server

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t = 0, n = 0, count = 0;

    scanf("%d %d", &t, &n);

    int* arr = (int*)malloc(sizeof(int) * t);
    int sum = 0;
    for (int i = 0; i < t; i++) {
        if (sum >= n)
            break;
        scanf("%d", &arr[i]);

        //printf("%d\n", sum);

        sum += arr[i];
        count++;
    }
    if (sum <= n) {
        printf("%d\n", count);
    }
    else {
        printf("%d\n", count - 1);
    }
    return 0;
}