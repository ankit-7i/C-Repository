#include<stdio.h>
 main(){
    int n,r,c,a;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(a=n*(n+1)/2, r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("%3d",a--);
        }
        printf("\n");
    }
}