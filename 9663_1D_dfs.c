#include <stdio.h>
#include <stdlib.h>

//9663
/* 1차원 배열로 해결하는 버전 
대각선에 있는 점 (x,y)과 (a,b)는
x-a = y-b가 성립한다.*/


int col[15] = {0,};
int N, total = 0;

int check(int level)
{
    for(int i = 0; i < level; i++)
    {
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i) {
            return 0;
        }
    }
    return 1;
}

void dfs(int x)
{
    if(x == N) {
        total+=1;
        return;
	}
    
    for(int i = 0; i < N; i++) {
        col[x] = i; 
        if(check(x)) 
            dfs(x+1);
    }
}

int main(void) {
    scanf("%d",&N);
    dfs(0);
    printf("%d\n",total);
    return 0;
}
