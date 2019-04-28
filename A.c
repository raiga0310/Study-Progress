#include<stdio.h>
int main(){
	float a,c;
	int b,d=0;

	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<c+0.5;i+a){
		if(i!=0){
			d+=b;
		}
	}
	printf("%d",d);

	return 0;
}