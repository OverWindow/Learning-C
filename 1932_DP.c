#include <stdio.h>

//1932
//���� ��ȹ�� 
int bigger(int a, int b) {
	return a>b ? a : b;
}

int main(void) {
	
	int n;
	scanf("%d",&n);
	int layer[500] = {-1,};
	int flag = 0;
	int biggest = 0;
	
	for(int i = 1; i <= n; i++) {
		int tmp[500];
		for(int j = 0; j < i; j++) {
			scanf("%d",&tmp[j]);
			
			if(!flag) {     			//ù ���� 
				tmp[j] = tmp[j];
				flag = 1;
			} else if(j == i-1) {
				tmp[j] = layer[j-1] + tmp[j];
			} else if (j == 0) {
				tmp[j] = layer[j] + tmp[j];
			} else {
				tmp[j] = bigger(layer[j-1],layer[j]) + tmp[j];
			}
			
			biggest = bigger(tmp[j],biggest);
			//printf("%d\n",biggest);
		}
		
		for(int j = 0; j < i; j++) {
			layer[j] = tmp[j];
		}
	}
	
	printf("%d\n",biggest);
	return 0;
}
