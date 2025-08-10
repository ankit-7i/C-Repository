#include<stdio.h>
#include<conio.h>
main(){
	int a ,b ;
	printf("Enter a,b values");
	scanf("%d %d",&a,&b);
	a>b && puts("a is big ") || b>a && puts("b is big ") || puts("Both are equal");
	getch();
}
