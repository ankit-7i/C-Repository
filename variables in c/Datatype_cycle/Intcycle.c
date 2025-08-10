/*In C & C++ the compiler size is 16 bits i.e. 216  65536
This no again divided into 2 types.
1. Signed integer  -32768 to +32767
2. Unsigned integer  0 to 65535
In java & others compiler size is 32 bits i.e. 232  4294967296
Java  integer  -2147483648 to +2147483647

This no again divided into 2 types.
1. Signed integer  -32768 to +32767
2. Unsigned integer  0 to 65535

*/
#include<stdio.h>
main(){
    int a;
    printf("a=%d\n",a=32768);/*-32768*/
    printf("a=%d\n",a=32770);//-32766
    printf("a=%d\n",a=65536);//0
    printf("a=%d\n",a=65540);//4
    printf("a=%u\n",a=-4);
}