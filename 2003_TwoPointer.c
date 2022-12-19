#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 2003��
// �� ������
// ���� �����Ϳ� �� �����ͷ�
// �� �����Ͱ� ���ǿ� ������ ���� ������ += 1
// �� �����͵� �׿� ���߾� �ٽ� ����
// while�� �ϳ��� �����°� ���� 

int arr[10001];

int main(void) {
	int N,M;
	scanf("%d%d",&N,&M);
	
	for(int i = 0; i < N; i++) {
		scanf("%d",&arr[i+1]);
	}
	
	int cnt = 0;
	int left = 1;
	int right = 1;
	int sum = 0;
	while(left <= N && right <= N) {
		if(sum + arr[right] == M) {
			cnt += 1;
			left += 1;
			right = left;
			sum = 0;
		} else if (sum + arr[right] > M) {
			left += 1;
			right = left;
			sum = 0;
		} else if (sum + arr[right] < M) {
			sum += arr[right];
			right += 1;
		}
	}
	
	printf("%d\n",cnt);
	return 0;
}
