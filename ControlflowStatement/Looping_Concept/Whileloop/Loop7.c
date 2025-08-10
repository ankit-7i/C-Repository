#include<stdio.h>
main(){
    int i =1,n,es=0,os=0;
    printf("Enter the n val: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0)es+=i; else os+=i;
        i++;
    }
    printf("Even sum: %d\n Odd sum: %d\n",es, os);
}