#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 16507번
// 충남대 2차원 누적 합 평균  

int drawing[1000][1000];
int prefix[1001][1001];

int main(void) {
	int N,M,Q;
	scanf("%d%d%d",&N,&M,&Q);
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			scanf("%d",&drawing[i][j]);
		}
	}
	
	for(int i = 1; i < N + 1; i++) {
		for(int j = 1; j < M + 1; j++) {
			prefix[i][j] = drawing[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
		}
	}
	
	for(int i = 0; i < Q; i++) {
		int x1,y1, x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		int answer = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
		int cnt = (x2 - x1 + 1) * (y2 - y1 + 1);
		printf("%d\n",answer / cnt);
	}
	
	return 0;
}
