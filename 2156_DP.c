#include <stdio.h> 

//2156
//µ¿Àû °èÈ¹¹ý  
int bigger(int a, int b) {
	return a>b ? a : b;
}

int main(void) {
	int N;
	scanf("%d",&N);
	
	int wine[10001] = {0,};
	for(int i = 1 ; i <= N; i++) {
		scanf("%d",&wine[i]);
	}
	
	long dp[10001] = {0,};
	dp[0] = 0;
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	
	for(int i = 3; i <= N; i++) {
		dp[i] = bigger(dp[i-2],dp[i-3] + wine[i-1]) + wine[i];
		dp[i] = bigger(dp[i-1],dp[i]);
		//printf(":%d\n",dp[i]);	
	}
	
	printf("%ld",dp[N]);
	return 0;
}
