#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 10211¹ø
// Maximum Subarray
// f(i) = max(0, f(i - 1)) + arr[i] 

int arr[1000];
int maxArray[1000];

int bigger(int a, int b) {
	if (a > b) return a;
	else if (a <= b) return b;
}

int main(void) {
	int T;
	scanf("%d",&T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d",&N);
		for(int j = 0; j < N; j++) {
			scanf("%d",&arr[j]);
		}
		
		long long int max;
		for(int j = 0; j < N; j++) {
			if(j == 0) {
				maxArray[j] = arr[j];
				max = arr[j];
				continue;
			}
			maxArray[j] = bigger(0,maxArray[j - 1]) + arr[j];
			if(max < maxArray[j]) max = maxArray[j];
		}
		printf("%d\n",max);	
	}
	return 0;
}
