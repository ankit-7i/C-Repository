// n=5 
//1^2+ 2^2+3^2+4^2+5^2=55
#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i*i;
        if(i<n)printf("%d%c+",i,253);else printf("%d%c=%d",i,253,s);
    }
}