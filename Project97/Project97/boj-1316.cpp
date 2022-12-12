//boj-1316
//그룹단어 체커

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[26];
	int n, cnt = 0;
	char alp[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		
		scanf("%s", alp);

		for (int j = 0; j < 26; j++) {
			arr[j] = 0;
		}

		int len = strlen(alp);

		for(int j = 0; j < len; j++) {
			//arr[알파벳 순서]번째 배열이 0 이라면 1 저장
			if(arr[alp[j] - 97] == 0){
				arr[alp[j] - 97]++; // 더하는것 대신 1을 저장 시켜줘도 됨
			}
			//만약 0이 아니라면, 바로앞 문자 확인
			else {
				if (alp[j - 1] != alp[j]) //서로 다르다면, 그룹 단어가 아니므로 반복문 탈출
					break;
			}

			//j가 탈출하지않고 len만큼 다 돌았다면 카운트 해준다.
			if (j == len-1) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}