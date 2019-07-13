#include<stdio.h>
 int main(void){
 	int num[2]={};
 	scanf("%1d%1d",&num[0],&num[1]);
 	if(num[0]==9||num[1]==9)printf("Yes");
 	else printf("No");
 	return 0;
}