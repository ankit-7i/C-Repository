// N =10
// 1239456187892710
#include<stdio.h>
int main(){
    int n ,i;
    printf("Enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%3d",i);
        if(i%3==0){
            printf("%3d",i*3);
        }
    }
}