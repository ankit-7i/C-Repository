#include<stdio.h>
main(){
    int a=38;
    printf("%d\n",a);
    printf("%d\n",a);
    printf("%-4d\n",a);
    printf("%1d\n",a);
    printf("%*d\n",5,a);
    printf("%$d\n",5,a);
    printf("%.5d\n",a);
}