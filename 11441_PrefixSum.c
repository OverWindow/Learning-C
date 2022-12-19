#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 11441��
// 1���� �迭 ���� �� 

int arr[100000];
long long prefix[100001];

int main(void) {
	int N;
	scanf("%d",&N);
	
	prefix[0] = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
		prefix[i + 1] = prefix[i] + arr[i];
	}
	
	int M;
	scanf("%d",&M);
	
	for(int i = 0; i < M; i++) {
		int i,j;
		scanf("%d%d",&i,&j);
		
		printf("%lld\n",prefix[j] - prefix[i - 1]);
	}
	return 0;
}
