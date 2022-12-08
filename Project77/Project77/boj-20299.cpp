//boj-20299
//3대 측정

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k, l, ** arr = NULL, cnt = 0;

    scanf("%d %d %d", &n, &k, &l);
    arr = (int**)malloc(sizeof(int*) * n);//포인트형 배열에 동적할당

    for (int i = 0; i < n; i++) {
        //포인트 형 배열에다가 또 동적할당
        arr[i] = (int*)malloc(4 * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
        if (arr[i][3] = arr[i][0] >= l && arr[i][1] >= l && arr[i][2] >= l && arr[i][0] + arr[i][1] + arr[i][2] >= k) {
            cnt += arr[i][3];
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < n; i++) {
        if (arr[i][3]) {
            printf("%d %d %d ", arr[i][0], arr[i][1], arr[i][2]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}