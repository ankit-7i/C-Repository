#include<stdio.h>
main(){
    int nr,nc,r,c,a;
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    printf("Enter the number of columns: ");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++){
        for(a=r,c=1;c<=nc;c++){
            printf("%3d",a++);
        }
        printf("\n");
    }
}