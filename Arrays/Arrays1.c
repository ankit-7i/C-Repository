#include<stdio.h>
main(){
    int a[4] = {1, 2, 3, 4};
    printf("Array size in bytes: %d\n", sizeof(a));
    printf("Array size in elements: %d\n", sizeof(a)/sizeof(a[0]));
    printf("Array having %d cells\n",sizeof(a)/sizeof(int));
}