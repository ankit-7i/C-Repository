#include<stdio.h>
 main(){
    int n,r,c,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("%3d",a++);
        }
        printf("\n");
    }
}