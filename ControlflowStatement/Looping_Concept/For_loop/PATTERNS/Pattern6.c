#include<stdio.h>
main(){
    int nr,nc,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    printf("Enter the number of columns: ");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++){
        for(c=1;c<=nc;c++){
            printf("%3c",96+c);
        }
        printf("\n");
    }
}