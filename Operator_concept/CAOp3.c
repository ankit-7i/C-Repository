#include<stdio.h>
main(){
	int a = 10.5,b =20, c= 4.4;
	c += b*= a/=2.2;
	printf("a=%d,b=%d,c=%d",a,b,c);
}
