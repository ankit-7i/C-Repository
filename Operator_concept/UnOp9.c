#include<stdio.h>
main(){
	int a= 2,b;
	b = a++ + a++ + a++;
	printf("a=%d,b=%d",a,b);
	a=2;
	b = ++a + ++a + ++a;
	printf("a=%d,a=%d",a,b);
}
