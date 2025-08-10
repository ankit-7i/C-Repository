#include<stdio.h>
#include<conio.h>
main(){
	int a = 3, b = 5 , c;
	c = (a++ + ++b)++;
	printf("a=%d,b=%d,c=%d",a++,a,b,c);
	getch();
}
//[Error] lvalue required as increment operand
