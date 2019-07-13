#include<stdio.h>
int main(void){
	char str[10];
	scanf("%s",str);
	if(str[3]==55)str[3]++;
	printf("%s",str );
	return 0;
}