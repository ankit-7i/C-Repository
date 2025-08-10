#include<stdio.h>
#include<conio.h>
main(){
	int a;
	a = (1,2,3); // precedence And priyority goes to 3 due bracket gets the first prayority
	printf("a=%d",a);
	getch();
}
