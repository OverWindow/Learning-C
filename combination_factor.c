#include <stdio.h>


//���� 2004�� 
/* 5�� ������ 5�� �μ��� ���� ���� ������ ���´�
25�� ������ 25�� �η� ���� ���� ������ ���´�
...�̸� ����ؼ� ���ϸ�
�� ���μ� 5�� ������ ���´�.*/�� 
int howMany(int max,int num) {
	int howMany = 0;
	for(long long int i = num; i <= max; i *= num) {
		howMany += max/i;
	}
	return howMany;
}

int main(void) {
	
	int n,m;
	scanf("%d %d",&n,&m);

	long long int Five = howMany(n,5) - howMany(m,5) - howMany(n-m,5);
	long long int Two = howMany(n,2) - howMany(m,2) - howMany(n-m,2);
	
	if(Five < Two) {
		printf("%d\n",Five);
	} else {
		printf("%d\n",Two);
	}
	
	return 0;
}
