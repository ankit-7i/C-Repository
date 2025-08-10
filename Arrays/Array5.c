#include<stdio.h>
main(){
    int a[5],i;
    printf("Enter 5 int elements");
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Elements are: ");
    for(i=0;i<5;i++)printf("%4d",a[i]);
}