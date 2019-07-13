#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	int juwel[n],cost[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&juwel[i]);
    }
    for(int j=0;j<n;j++){
    	scanf("%d",&cost[j]);
    }
    for(int l=0;l<n;l++){
    	if(juwel[l]-cost[l]>=0){
    		count+=(juwel[l]-cost[l]);
    	}
    }
    printf("%d",count);
    return 0;
}