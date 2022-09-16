#include <stdio.h>


//백준 2004번 
/* 5로 나누면 5를 인수로 가진 수의 갯수가 나온다
25로 나누면 25를 인로 가진 수의 갯수가 나온다
...이를 계속해서 더하면
총 소인수 5의 갯수가 나온다.*/수 
int howMany(int max,int num) {
	int howMany = 0;
	for(long long int i = num; i <= max; i *= num) {
		howMany += max/i;
	}
	return howMany;
}

int main(void) {
	
	int n,m;
	scanf("%d %d",&n,&m);

	long long int Five = howMany(n,5) - howMany(m,5) - howMany(n-m,5);
	long long int Two = howMany(n,2) - howMany(m,2) - howMany(n-m,2);
	
	if(Five < Two) {
		printf("%d\n",Five);
	} else {
		printf("%d\n",Two);
	}
	
	return 0;
}
