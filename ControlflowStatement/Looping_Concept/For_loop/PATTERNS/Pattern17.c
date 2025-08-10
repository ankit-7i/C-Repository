#include<stdio.h>
main(){
    int nr,nc,r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&nr,&nc);
    for(r=1;r<=nr;r++){
        char L ='a' ,U ='A';
        for(c=1;c<=nc;c++){
            if(c%2==0)
            printf("%c",L++);
            else
            {
                printf("%c",U++);
            }

        }
        printf("\n");

    }
}