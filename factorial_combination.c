#include <stdio.h>

//���� 1010�� 
//���� ���丮�� �� 

double factorial(int a) {
	if(a == 1 || a == 0) {
		return 1;
	} else {
		return a * factorial(a-1);
	}
}

double combination(int n, int k) {
	return factorial(n)/(factorial(k)*factorial(n-k));
}

int main(void) 
{
	int t;
	scanf("%d",&t);
	
	for(int i = 0 ; i < t; i++) {
		int n,m;
		scanf("%d %d",&n,&m);
		printf("%.0f\n",combination(m,n));
	}
	�� 
	return 0;
}
