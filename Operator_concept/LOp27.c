#include<stdio.h>
#include<conio.h>
main(){
	int a = 1, b =2 ,c ;
	c = a>b && printf("Good Morning");    // 1>2 =0 due to && operator Good Morning will not printed
	c = b>a || printf("Good Afternoon"); // 2>1 = 1 due to || operator Good afternoon will not printed
	c = b > a && printf("Good Night"); // 2>1 = 1 
	printf("a = %d, b= %d ,c= %d", a,b,c+a+b); // a = 1 ,b = 2 , c= 1+2+1 = 4
	getch();
}
