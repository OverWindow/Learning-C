#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 13900번
// 누적합  
// EX)
// 1 2 3 4 
// (1,2) (1,3) (1,4) (2,3) (2,4) (3,4) 
// = 1 * (2 + 3 + 4) + 2 * (3 + 4) + 3 * (4) .....

int arr[100000];
int prefix[100001];

int main(void) {
	int N;
	scanf("%d",&N);
	
	prefix[0] = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
		prefix[i + 1] = prefix[i] + arr[i];
	}
	
	long long int sum = 0;
	for(int i = 0; i < N; i++) {
		sum += (long long)arr[i] * (prefix[N] - prefix[i + 1]);
	}
	
	printf("%lld\n",sum);
	return 0;
}
