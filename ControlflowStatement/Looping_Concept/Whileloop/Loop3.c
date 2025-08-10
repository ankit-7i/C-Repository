#include<stdio.h>
main(){
    int i = 1,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    while(i<=n) printf("%4d",i++);
}