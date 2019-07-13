#include<stdio.h>
#include<stdlib.h>

int compare(const int *val1,const int* val2);

int main(void){
	int ary[4],ans[4]={1,4,7,9};
	int n=sizeof(ary)/sizeof(ary[0]);
	int i,count=0;

	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}

	qsort(ary,n,sizeof(int),(int(*)(const void *,const void *))compare);

	for(int j=0;j<n;j++){
		if(*(ary+j)!=*(ans+j)){
			printf("No");
			break;
		}
		else {
            count++;
		}
	}
	if(count==4)printf("Yes");

	return EXIT_SUCCESS;
}

int compare(const int* val1,const int* val2){
	if(*val1<*val2){
		return -1;
	}else if(*val1==*val2){
		return 0;
	}else{
		return 1;
	}
}