#include<stdio.h>
main(){
    char a=65,b=66,c=a+b;
    printf("c=%d\n",c);
    printf("c=%d\n",c=260);
    printf("c=%d\n",c=1-130);
}
/*Data type cycle:
In C & C++ we are using ASCII Character set, which is having 0 to 255
[256] ASCII values.
They are categorized into 2 types.
256/2 = 128
1. Signed characters  -128 to +127
2. Unsigned characters  0 to 255*/