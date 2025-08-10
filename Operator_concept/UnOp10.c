#include<stdio.h>
main(){
	int x = 3,y =2;
	int z = x++ * (x+y) - y--; // declaration and initialization so no prayority of operators will be there 
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=3,y=2;
	z = x++ * (x+y) - y--; // initialization operator precendence followed
	printf("x=%d,y=%d,z=%d\n",x,y,z);
}
