#include<stdio.h>
main(){
    int i=1,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2 != 0)printf("%4d",i);
        i++;
    }
}