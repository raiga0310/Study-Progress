#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	int juwel[n],cost[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&juwel[i]);
    }
    for(i=0;i<n;i++){
    	scanf("%d",&jcost[i]);
    }
    for(i=0;i<n;i++){
    	if(juwel[i]-cost[i]>=0){
    		count++;
    	}
    }
    return 0;
}