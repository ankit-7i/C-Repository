// Wtite a C program to print a 3 digit number in reverse order without using loop 
#include<stdio.h>
#include<conio.h> 
main(){
	int n = 123;
	printf("%d reverse is %d",n,n%10); // 123%10 returns 3 
	n= n/10;// it removes 3 so the new updated value of n = 12
	printf("%d%d",n%10,n/10); // first we get 2 from 12%10 and then get 1 from 12/10
	getch();
}

/* 
123/10=12
12/10=1
1/10=0
Note: Any no/10 removes the last digit.
*/
