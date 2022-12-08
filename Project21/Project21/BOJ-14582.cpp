//boj-14582
//baseball

//재미니스가 1회라도 이기는 순간이 있다면 역전패 yes 아니라면 no
#include <stdio.h>

int main(void) {
    int ullim[9] = { 0, };
    int gurlivers[9] = { 0, };
    int sum = 0, gsum = 0;
    int count = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &ullim[i]);
    }

    for (int i = 0; i < 9; i++) {
        scanf("%d", &gurlivers[i]);
    }

    for (int i = 0; i < 9; i++) {
        sum = sum + ullim[i];
        if (sum > gsum) {
            count++;
        }
        gsum = gsum + gurlivers[i];

        printf("%d ", count);
    }
    if (count != 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}