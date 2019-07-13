#include<stdio.h>
int main(void){
	int count;
	scanf("%d",&count);
	printf("%d",count*800-(count-(count%15))/15*200);
	return 0;
}