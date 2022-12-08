//baekjoon-11320
//삼각 무늬-1

//삼각형의 높이 구한는 공식이 루트3 / 2 * a 여서 sqrt를
//써야하나 고민을 했는데 생각처럼 코드가 잘 나오질 않았다.


#include <stdio.h>
#include <math.h>

int main(void) {
    int t = 0, a = 0, b = 0;
    int count = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);

        count = (a * a) / (b * b);

        printf("%d\n", count);
    }

    return 0;
}