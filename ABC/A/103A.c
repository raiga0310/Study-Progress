#include<stdio.h>
#include<stdlib.h>
int compar(const int *val1, const int *val2);
int main(void){
	int a[3],sum;
	int n=sizeof(a)/sizeof(a[0]);
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	    qsort(a, n, sizeof(int),
        (int (*)(const void *, const void *))compar
    );
	sum=a[2]-a[0];
	printf("%d",sum);
	return EXIT_SUCCESS;
}



int compar(const int *val1, const int *val2) {
    if ( *val1 < *val2 ) {
        return -1;
    } else if ( *val1 == * val2 ) {
        return 0;
    } else {
        return 1;
    }
}