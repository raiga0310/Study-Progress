#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (c <= a+b) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}