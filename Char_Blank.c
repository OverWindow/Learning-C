#include <stdio.h>

int main(void)
{
	int opd1, opd2;
	char op;
	
	printf("수식을 입려가세요: ");          // 30         * 40
	scanf("%d", &opd1);
	while((op= getchar())== ' ')        // 이렇게 하면 공백일때는 넘어가고 문자가 나올때까지 돌아감. 
	;                                   //고로 op가 *일때까지 함
	scanf("%d",&opd2);  
	
	printf("%d,%c,%d",opd1,op,opd2);        // 30,*,40
	return 0;
}
