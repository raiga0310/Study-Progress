#include<stdio.h>
int main(){
	int a,*p;
	p=&a;
	printf("a is %d,where on %d\n",a,p);
	return 0;
}