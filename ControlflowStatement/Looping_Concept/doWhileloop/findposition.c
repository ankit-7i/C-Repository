#include<stdio.h>
main(){
    long m,n;
    int r,d,f=0,c=0;
    printf("Enter n val");
    scanf("%ld",&n);
    printf("Enter digit to search");
    scanf("%d",&d);
    m=n;
    do{
        c++;
        m=m/10;

    }while(m!=0);
    //counting no of digits
    do{
        r=n%10;
        if(r==d) printf("%d in %d pos\n",d,c,f=1);c--;
        n=n/10;
    }while(n!=0);
    if(f==0) printf("%d not found",d);
}