#include<stdio.h>
main(){
    long m,n; int r,d,f=0,c=0;
    printf("Enter n value");
    scanf("%ld",&n);
    printf("Enter digit to be searched");
    scanf("%ld",&d);
    m=n;
    do{
        c++;
        m=m/10;
    }while(m!=0); //counting no of digit
    do{
        r=n%10;
        if(r==d) printf("%d in %d position\n",d,c,f=1);
        c--;
        n/=10;
    }while(n!=0);
    if(f==0) printf("%d not found in %d digit number\n",d);
}