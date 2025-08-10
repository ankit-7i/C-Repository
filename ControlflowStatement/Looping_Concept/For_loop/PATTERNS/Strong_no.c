//145 = 1! + 4! + 5! = 1 + 24 + 120 = 145  strong no
#include<stdio.h>
int main(){
    int n,m,r,f,s=0;
    printf("Enter a no");
    scanf("%d",&n);
    for(m=n;m!=0;m=m/10){
        for(f=1,r=m%10;r>1;r--){f=f*r;}
        s+=f;
    }
    puts(n==s?"Strong no":"Not a strong no");
}