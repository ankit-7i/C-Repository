#include<stdio.h>
#include<conio.h>
main(){
	int a , b , c;
	a = !printf("Hi");   // ==> Hi// Hi =2 , !2 = 0 
	b = !!a;  // b = !!a ==> !a == > !0 ==> 1 ==> !1 ==> 0
	c = !!!b; // !!!b ==> !b = !0 = 1, !1 = 0, !0 = 1
	printf("%d%d%d",a,b,c);
	getch();
}
