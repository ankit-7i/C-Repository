// n = 5
// 1+2+3+4+5=15
#include<stdio.h>
int main() {
    int n,i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <=n;i++){
        sum = sum + i;
        if(i<n)printf("%d+",i);else printf("%d=%d",i,sum);
    }
}