#include <stdio.h>
#define MAX 10
int main(void){
	int n=3;
	const int SIZE = 20;
	int array1[MAX] = {85,99,76};		//정상 
	int array2[SIZE]= {85,99,76};		//정상 
	int array3[n]= {85,99,76};			//에러: 배열의 길이를 변수로 설정할 순 없음
	int array4[3]={85,99,76};			//정상
	return 0;
}
	
