#include <stdio.h>
#include <stdlib.h>

//9663
/* 1���� �迭�� �ذ��ϴ� ���� 
�밢���� �ִ� �� (x,y)�� (a,b)��
x-a = y-b�� �����Ѵ�.*/


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
