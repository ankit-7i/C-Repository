#include<stdio.h>
main(){
    int i;
    for (i = 0; i<=5;)
    {
        printf("%d\t", i++);
    }
    printf("%d",++i);
}