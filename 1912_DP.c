#include <stdio.h>

//1912번 
//동적 계획법  

int bigger(int a, int b) {
	return a>b ? a : b;
}

int main(void) {
	int n;
	scanf("%d",&n);
	int arr[100000];
	int finding[100000];
	
	for(int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	
	int biggest = arr[0];
	finding[0] = arr[0];
	
	for(int i = 1; i<n;i++) {
		finding[i]= bigger(finding[i-1]+arr[i],arr[i]);
		/* 전 값들의 합보다 이번 값이 크다는 것은 지금 값부터 
		카운팅을 시작한다면 더 큰 숫자를 만들 수 있다는 식
		https://rightbellboy.tistory.com/83
		*/
		
		biggest = bigger(finding[i],biggest);
	}
	
	printf("%d\n",biggest);
	return 0;
}
