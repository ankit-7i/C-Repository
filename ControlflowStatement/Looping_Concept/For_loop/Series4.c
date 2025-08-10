// n=5 1 + 1/1 + 1/2 + 1/3 + 1/4 + 1/5 =3.28
#include<stdio.h>
main(){
    int n,i; float s=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("1+");
    for(i=1;i<n;i++){
        s+=1.0/i;
        if(i<n)printf("1/%d+",i);else printf("1/%d=%.2f",i,s);
    }
}