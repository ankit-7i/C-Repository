#include<stdio.h>
main(){
    int nr,nc,r,c;
    char L ='a',U ='A';
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&nr,&nc);
    for(r=1;r<=nr;r++){
        for(c=1;c<=nc;c++){
            if(r%2==0)
            printf("%c",L);
            else
            printf("%c",U);
        }
        printf("\n");
        if(r%2==0)L++;
        else U++;
    }
}