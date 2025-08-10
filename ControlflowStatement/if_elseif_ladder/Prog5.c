// Finding max in 3 no's
#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c) puts("All are equal");
    else if(a==b && a>c) puts("a and b are equal and greater than c");
    else if(a==b && a<c) puts("a and b are equal and smaller than c");
    else if(b==c && b>a) puts("b and c are equal and greater than a");
    else if(b==c && b<a) puts("b and c are equal and smaller than a");
    else if(a==c && a>b) puts("a and c are equal and greater than b");
    else if(a==c && a<b) puts("a and c are equal and smaller than b");
    else if(a>b) puts("a is greater than b and c");
    else if(a<b) puts("a is smaller than b and c");
    else if(b>c) puts("b is greater than a and c");
    else if(b<c) puts("b is smaller than a and c");
    else puts("c is greater than a and b");
    
}