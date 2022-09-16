#include <stdio.h>

long long power(int,int);

int main(void){
	int n;
	scanf("%d",&n);
	printf("n   2^n   3^n   4^n   5^n\n");
	printf("---------------------------\n");
	for(int i = 0; i <=n; i++)
	{
		printf("%d",i);
		for(int j = 2; j <= 5; j++ )
		{
			printf("%6d",power(j,i));
		}
		printf("\n");
	}
	return 0;
}

long long power(int m, int n){
	int result = 1;
	if ( n == 0)
		return 1;
		
	for(int i = 0; i < n; i++)
	{
		result *= m;
	}
	return result;
}
