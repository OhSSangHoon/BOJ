// boj-10419
// Áö°¢

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int d = 0, count = 0;
        scanf("%d", &d);
        for (int j = 1; j < d; j++) {
            int sol = j + j * j;
            if (sol <= d)
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}