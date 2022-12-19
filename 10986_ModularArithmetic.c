#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 10986��
// ���� �� �׸��� ��ⷯ ���
// i+1 ~ j ������ ���� ���϶� 
// (prefix[j] - prefix[i]) mod M == 0 �̶��
// prefix[j] mod M = prefix[i] mod M �̴�
// ��ũ: https://sexycoder.tistory.com/66 
long long r[1001];

int main(void) {
	int N, M;
	long long sum = 0;
	scanf("%d %d",&N, &M);
		
	int num;
	for(int i = 0 ; i < N; i++) {
		scanf("%d",&num);
		sum += num;
		r[sum % M] += 1;
	}

	long long result = r[0];
	for(int i = 0; i <= 1000; i++) {
		result += (r[i] * (r[i] - 1)) / 2;
	}
	
	printf("%lld\n",result);
	return 0;
}
