#include<stdio.h>
#include<conio.h>
main(){
	printf("%d\n", 9>5>1);    // 9 > 5 = 1 1>1=0
	printf("%d\n", 9 && 5 && 3); // 9 && 5  = 1 && 1 , 1 && 1 = 1 
	//Note: In C & C++ other than 0 anything is 1 i.e. true.
	printf("%d\n", 0 || 5 && !5); // 0 || 5 && !5  = !5 = 0 1 && 0 = 0 ,0 || 0 = 0 
	printf("%d\n", 5.5 && 'A'); // 5.5 && 'A' 1 && A (65) = 1 && 1 = 1
	getch();
}
