// print 1.. n without loop
#include<stdio.h>
main(){
    int i =1,n;
    printf("Enter n value");
    scanf("%d",&n);
    start:
    if(i<=n)
    {
        printf("%d\t ",i);
        i++;
        goto start;
    }
}