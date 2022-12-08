//baekjoon-5597
//과제 안 내신 분

//30칸의 배열에 1~30까지의 수 입력
//1부터 30까지 for문을 돌려 없는 수 오름차순으로 출력
//배열에 입력하지 않은 수 2개를 찾아라

//입력받은 student 값을 배열arr[student-1]에 저장시킨다. ex)2를 입력하면 arr[1]에 2 저장

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int student;
    int arr[30] = { 0, };

    for (int i = 0; i < 28; i++) {
        scanf("%d", &student);

        arr[student - 1] = student;
        //오름차순 정리 student의 값이 1이라면 arr[0]에 저장
    }

    for (int i = 0; i < 30; i++) {
        //배열의 값이 0 이라면 그 배열의 순서 출력
        if (arr[i] == 0) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
