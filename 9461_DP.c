#include <stdio.h>

//9461번
//동적 계획법 

long long int N[101] = {0,};

void preset(void) {
	N[1] = N[2] = N[3] = 1;
	N[4] = N[5]= 2;
	
	for(int i = 6; i <= 100; i++) {
		N[i] = N[i-1] + N[i-5];
	}
}

int main(void) {
	
	int n;
	scanf("%d",&n);
	
	preset();
	
	for(int i = 0 ; i < n; i++) {
		int num;
		scanf("%d", &num);
		printf("%lld\n",N[num]);
	}
	return 0;
}
