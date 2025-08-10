#include<stdio.h>
#include<conio.h>
main(){
	int a,b,c;
	a = printf("I\t");       // a=p("I\t"); = 2
	b = a * printf("Hate\t"); // b = a * p("Hate\t"); = 2 * 5 = 10
	c = a + b * printf("You"); // c = a + b * p("You"); 2+ 10*3 = 2 +30 = 32
	printf("%d%d%d",a,b,c);
	getch();
}
