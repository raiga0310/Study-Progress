#include<stdio.h>
int main() {
	int n,m,c,count = 0;
	scanf("%d%d%d",&n,&m,&c);
	int a[n][m],sum[n]={};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d",&a[i][j]);
			sum[i]+=a[i][j];
		}
	}
	return 0;
}