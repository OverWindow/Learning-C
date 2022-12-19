#include <stdio.h>
#include <string.h>

// 2167�� 
// ���� �� �� �κ� �� 2���� �迭 ����
// �� �˾Ƶ� ��  
int arr[300][300];
int prefixSum[301][301];

int main(void) {
	int n,m;
	scanf("%d %d\n",&n,&m);	

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d",&arr[i][j]);
		}
	}	
	
	for(int i = 0; i < 301; i++) {
		prefixSum[i][0] = 0;
		prefixSum[0][i] = 0;
	}
	
	for(int i = 1; i < n + 1; i++) {
		for(int j = 1; j < m + 1; j++) {
			prefixSum[i][j] = arr[i - 1][j - 1] + prefixSum[i][j - 1] + prefixSum[i - 1][j] - prefixSum[i - 1][j - 1];
			//printf("%d ",prefixSum[i][j]);
		}
		//putchar('\n');
	}
	
	int q;
	scanf("%d",&q);
	
	for(int i = 0; i < q; i++) {
		int inX,inY, outX, outY;
		scanf("%d %d %d %d",&inX, &inY, &outX, &outY);
		printf("%d\n",prefixSum[outX][outY] - prefixSum[inX - 1][outY] - prefixSum[outX][inY - 1] + prefixSum[inX - 1][inY - 1]);
	}
	
	return 0;
}
