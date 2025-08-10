#include<stdio.h>
#include<conio.h>
main(){
	printf("%d\n", 5==4,7>=7);
	printf("%d,%d\n", 5==4,7>=7);
	printf("%d\n", 5==4  || 7>=7);
	printf("%d\n", 5==5 && 7!=7);
	printf("%d\n", !(5<5));
	printf("%d\n",  5==5 && 6<=6 &&7>7);
	printf("%d\n", 5==5 ||6<=6 &&7>7);
	printf("%d\n", (5==5 || 6<=6) && 7>7);
	getch();
}

// && operator gets the first priority
