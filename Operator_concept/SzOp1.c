//sizeof( ) operator: It return the no of bytes required for
//a variable / data type of value.
#include<stdio.h>
main(){
	int a ; float b; char c;
	long int d; double e; long double f;
	printf("%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("%d,%d,%d\n",sizeof(d),sizeof(e),sizeof(f));
	printf("%d,%d,%d\n",sizeof(int),sizeof(float),sizeof(char));
	printf("%d,%d,%d\n",sizeof(long int),sizeof(double),sizeof(long double));
	printf("%d,%d\n",sizeof(-5),sizeof(5));
	printf("%d,%d\n",sizeof(32767),sizeof(32768));
	printf("%d,%d\n",sizeof(32768u),sizeof(32768u));// u stands for unsigned(suffix type casting)
	printf("%d,%d\n",sizeof((int)32768),sizeof((unsigned)32768));//prefix type casting


	
}
// after 32767 the int val is long int so it will be 4 bytes 
