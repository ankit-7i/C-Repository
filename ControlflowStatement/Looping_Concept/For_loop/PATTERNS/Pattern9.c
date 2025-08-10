#include<stdio.h>
main(){
    int nr,nc,r,c,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    printf("Enter the number of columns: ");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++){
        for(c=1;c<=nc;c++){
            if(r==1 || c == 1 || r == nr || c == nc )
            printf("%3d ",a++);
            else 
            printf("%3c ",'*');
        }
        printf("\n");
    }
}