#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 15724 번
// 2차원 배열 누적합 

int arr[1024][1024];
long long prefix[1025][1025];

int main(void) {
	int N,M;
	scanf("%d%d",&N,&M);
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i = 1; i < N + 1; i++) {
		for(int j = 1; j < M + 1; j++) {
			prefix[i][j] = arr[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
		}
	}
	
	int K;
	scanf("%d",&K);
	
	for(int i = 0; i < K; i++) {
		int x1, y1, x2, y2;
		scanf("%d%d%d%d",&x1, &y1, &x2, &y2);
		printf("%lld\n",prefix[x2][y2] - prefix[x1 -1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1]);	
	}
	return 0;
}
