#include<stdio.h>
#include<conio.h>
main(){
	int a = 10.4; /*Implicit Type casting*/
	float b = 10;
	float c = 3/2;
	printf("a=%d\n",a);
	printf("b=%f\n",b);
	printf("c=%f\n",c);
	printf("%d\n",5/2);
	printf("%f\n",5.0/2);
	printf("%f\n",5.0/2.0);
	printf("%f\n",(float)5/2);/*Explicit Type casting*/
	printf("%d\n",(int)5.0/2);
	printf("%d\n",(float)(5/2));
	getch();


}



/*Note: In division any one operand or both are floats  then result also float. If both operands are int then  result also int. 
*/
