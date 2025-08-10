// spy no  or not ?

// 123 = 1+2+3 =6
// 123=1*2*3=6
#include<stdio.h>
int main() {
    int n,i,s,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(m=1,s=0;n!=0;n=n/10){
        int r= n%10;
        s=s+r;
        m=m*r;
    }
    puts(s=m?"spy no":"not spy");
}