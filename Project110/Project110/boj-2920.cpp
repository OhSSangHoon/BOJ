//boj-2920
//À½°è

#include <stdio.h>

int main(void) {
    int a;
    int arr[8];
    int as = 0, ds = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &a);
        arr[i] = a;
    }

    for (int i = 0; i < 4; i++) {
        if (arr[i] == i + 1 && arr[i] + arr[7 - i] == 9) {
            as++;
        }
        if (arr[7 - i] == i + 1 && arr[i] + arr[7 - i] == 9) {
            ds++;
        }
    }

    if (as == 4) {
        printf("ascending\n");
    }
    else if (ds == 4) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }

    return 0;
}