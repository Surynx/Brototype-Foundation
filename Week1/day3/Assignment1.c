#include<stdio.h>

void main(void){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum:%d",sum);
}