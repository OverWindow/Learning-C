#include <stdio.h>


// 16139번 누적 합 Prefix Sum
// 누적된 합을 먼저 계산하고 
// 뽑아서 쓴다 핵심임  

char string[200001];
int grid[27][200001];

int main(void) {
	int num;
	scanf("%s",string);
	getchar();
	scanf("%d",&num);
	
	for(int i = 0; i < 27; i++) {	
		int cnt = 0;
		int tmp = 0;
		while(string[cnt] != '\0') {
			if(string[cnt] - 'a' == i) {
				tmp += 1; 
			} 
			grid[i][cnt] = tmp;
			//printf("%d ",grid[i][cnt]);
			cnt++;
		}
		//putchar('\n');
	}
	
	
	char alphabet;
	int start;
	int end;
	for(int i = 0; i < num; i++) {
		scanf(" %c%d%d",&alphabet,&start,&end);
		int alphabetInt = alphabet - 'a';
		
		if(start == 0)
			printf("%d\n",grid[alphabetInt][end]);	
		else
			printf("%d\n",grid[alphabetInt][end] - grid[alphabetInt][start - 1]);
	
	}

	return 0;	
}
