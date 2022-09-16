#include <stdio.h>

int main(void){
	int year,month,sum,yun = 0;
	printf("year: ");
	scanf("%d",&year);
	
	printf("month: ");
	scanf("%d",&month);
	
	for(int i = 1; i < year; i++)
	{
		if ((i%4==0 && i%100!=0)||i%400==0)
		{
			yun += 1;
		}
	}
	
	
	
	sum = 365*(year-1-yun) + 366*(yun) + ;
	
	printf("%4d %2d\n",year, month);
	printf("%d",sum%7);
	return 0;
}
