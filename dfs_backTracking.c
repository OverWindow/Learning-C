#include <stdio.h>

//15649번
/* dfs and back tracking
뒤로 돌서 찾는 방법 재귀함수가 포인트*/ 
int n,m;
int arr[9] = {0,};
int visited[9]={0,};


void dfs(int cnt) {

	if(cnt == m) {
		for(int i = 0; i < m; i++)
			printf("%d ",arr[i]);
		printf("\n");
		return;
	}
	for(int i = 1 ; i <= n; i++) {
		if(!visited[i]) {
			visited[i] = 1;
			arr[cnt] = i;
			dfs(cnt+1);
			visited[i] = 0;
		}
	}

}

int main(void) {

	scanf("%d %d",&n,&m);
	
	dfs(0);
	return 0;
}
