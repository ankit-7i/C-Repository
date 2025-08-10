#include<stdio.h>
main(){
    int nr,nc,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    printf("Enter the number of columns: ");
    scanf("%d",&nc);
    for(r=1;r<nr;r++){
        for(c=1;c<nc;c++){
            if(c%2==0){
                printf("%c",96+c);
            }
            else 
            printf("%c",64+c);
        }
        printf("\n");
    }

}