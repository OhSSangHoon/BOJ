//boj-24262
//algorithm의 수행 시간 1


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
MenOfPassion(A[], n) {
    i = ⌊n / 2⌋;
    return A[i]; # 코드1
}
*/

//배열A와 n을 받아서 A의 원소를 return 하기 때문에 n이 얼마나 크던 작던 1번의 수행과
//시간복잡도 O(1)을 가지게 된다.


//시간복잡도 O(1) : 일정한 복잡도, 입력값이 증가하더라도 시간이 늘어나지 않는다.
int main(void) {
    int n = 0;

    scanf("%d", &n);

    printf("1\n0\n");
    
}