/*Increment / Decrement / Modify operators [++ / -- ]:
They are used to increment / decrement a variable value
by 1.
Eg:
int a=9, b=4;
Postfix increment & decrement:
a++ i.e. a=a+1 ? a=10
b-- i.e. b=b-1 ? b=3
prefix increment/decrement:
int a=9, b=4;
++a ? a=a+1 ? a=10
--b ? b=b-1 ? b=3
Note: Until using the 2nd variable pre and post operations
are same.
*/

#include<stdio.h>
#include<conio.h>
main(){
	int a = 9 , b = 4;
	a++;
	b--;
	printf("a=%d,b=%d\n",a,b);
	a = 9; b = 4;
	++a;
	--b;
	printf("a=%d,b=%d\n",a,b);
	getch();
}

