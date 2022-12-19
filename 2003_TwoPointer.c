#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 2003번
// 투 포인터
// 시작 포인터와 끝 포인터로
// 끝 포인터가 조건에 맞으면 시작 포인터 += 1
// 끝 포인터도 그에 맞추어 다시 시작
// while문 하나로 끝나는게 장점 

int arr[10001];

int main(void) {
	int N,M;
	scanf("%d%d",&N,&M);
	
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i+1]);
	}
	
	int cnt = 0;
	int left = 1;
	int right = 1;
	int sum = 0;
	while(left <= N && right <= N) {
		if(sum + arr[right] == M) {
			cnt += 1;
			left += 1;
			right = left;
			sum = 0;
		} else if (sum + arr[right] > M) {
			left += 1;
			right = left;
			sum = 0;
		} else if (sum + arr[right] < M) {
			sum += arr[right];
			right += 1;
		}
	}
	
	printf("%d\n",cnt);
	return 0;
}
