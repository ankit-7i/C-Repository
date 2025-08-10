#include<stdio.h>
#include<conio.h>
main(){
    int i =1,n;
    int s =0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    start:
    if (i<=n){
        s=s+i;
        i++;
        goto start;
    }
    printf("Sum=%d,avg=%.2f",s,(float)s/n);
    getch();
}