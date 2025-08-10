#include<stdio.h>
#include<conio.h>
main(){
    int i =1,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    start:
    if (i<n){
        if(i %2 ==0 )
        printf("%d\t ",i);
        i++;
        goto start;
    }
    getch();
}