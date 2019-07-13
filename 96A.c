#include<stdio.h>
int main(void){
	int a,b,count;
	scanf("%d%d",&a,&b);
	if(a<=b)count=a;
	else count=a-1;
	printf("%d",count);
	return 0;
}