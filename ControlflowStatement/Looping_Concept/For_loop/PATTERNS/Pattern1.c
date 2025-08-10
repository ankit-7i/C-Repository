#include<stdio.h>
main(){
    int n,t,i;
    printf("Enter no of tables");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        for(t=1;i<=10;i++){
            printf("%d * %d = %d\n",t,i,t*i);
        }
        printf("\n");
    }
}