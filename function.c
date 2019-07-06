#include<stdio.h>
#include<function.h>
int main(){
	int a,b;
	scanf("%d%d",%a,&b);
	printf("%d",max(a,b));
	return 0;
}
int max(int a,int b){
	if(a<b){
		return b;
	}
	else{
		return a;
	}
}