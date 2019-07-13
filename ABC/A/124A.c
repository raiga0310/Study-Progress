#include <stdio.h>
int main(void){
    int a,b,total=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<2;i++){
        if(a>b){
            total+=a;
            a--;
        }
        else{
            total+=b;
            b--;
        }
    }
    printf("%d",total);
    return 0;
}