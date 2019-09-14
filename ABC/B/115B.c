#include<stdio.h>
#include<math.h>
int min(int len,int *nums) {
	int i,_min = nums[0],count;
	for(i = 1; i < len; i++) {
		if(nums[i] < _min) {
			count = i;
		}
	}
	return count;
}
int main() {
    int n,k,sum = 0;
    int a,result;
    scanf("%d%d",&n,&k);
    int P[n];
    for(int j = 0; j < n; j++) {
    	scanf("%d",P[j]);
    }
    a = min(n,P)+1;
    int pre = ceil((a-1)/(k-1));
    int aft = ceil((n-a)/(k-1));
    sum = (int)pre + (int)aft;

    printf("%d",sum);

	return 0;
}
