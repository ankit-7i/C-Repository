/*Here one assignment operator combined with other operators as
follows.
+=, -=, *=, %=, /=, <<=, >>=, ~-,....
int a=10;
a+=4 ? a=a+4 ? 10+4 ? a=14
int b=20;
b*=5 ? b=b*6 ? b=100
float c=5;
c/=2 ? c=c/2? 5/2=2.500000
*/

#include<stdio.h>
main(){
	int a= 10 , b= 20;
	float c = 5;
	a += 4;
	b *= 5;
	c /=2;
	printf("a=%d,b=%d,c=%.2f",a,b,c);
	
}
