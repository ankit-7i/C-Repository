#include<stdio.h>
int a= 1,b=2,c;
main(){
    {
        int a = 10,b=20,c; //local var declaration
        printf("sum = %d\t",a+b+c);

    }
    printf("sum = %d\t",a+b+c); 

}
//sum garbage and sum = 3
// because local var c is not declared so garbage value returned but global value c default value is 0