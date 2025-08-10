#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	printf("%f\n",fmod(5.0,2.0));
	printf("%f\n",fmod(5.0,2));
	printf("%f\n",fmod(5,2.0));
	printf("%f\n",fmod(5,2));
	getch();
	
}
//5.0 % 2.0 = Error
//Note: We can’t do floating modules in C & C++ with %  operator. We have to use fmod() function available in  <math.h>
