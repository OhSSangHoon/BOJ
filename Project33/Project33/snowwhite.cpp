//baekjoon-3040
//백설공주와 일곱난쟁이

//임의의 수 9개를 입력 모두 더한다. 
//거기서 임의의 수 2개를 빼 100이 되도록 한다.

//100이 된다면 해당 2개의 수를 제외한 나머지 수 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[9], sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);

        sum += arr[i]; //난쟁이들의 모든 합
    }


    for (int i = 0; i < 9; i++) { //arr[0]..arr[8]까지 
        for (int j = i+1; j < 9; j++) {//arr[i+1]
            if (sum - (arr[i] + arr[j]) == 100) { //sum - arr[i] + [j]의 값이 100이 된다면
                printf("진짜 난쟁이: ");
                for (int k = 0; k < 9; k++) {
                    
                    if (k != i && k != j) { //arr[k]에 i와 j의 값이 없다면
                        printf("%d ", arr[k]);//출력
                    }
                }
                printf("\n가짜 난쟁이: %d %d ", arr[i], arr[j]);
                return 0;
            }
        }
    }
}