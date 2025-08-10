#include<stdio.h>
#include<conio.h>
 main()
{
long m,n,rev=0; int r;

printf("Enter n value "); scanf("%ld",&n); if(n<0)printf("-",n=-n);
m=n;
while(n!=0){r=n%10; rev=rev*10+r;n=n/10;}/* rev no */
do
{
switch(rev%10)
{
case 0: printf("Zero");break;
case 1: printf("One");break;
case 2: printf("Two");break;

case 3: printf("Three");break;
case 4: printf("Four");break;
case 5: printf("Five");break;
case 6: printf("Six");break;
case 7: printf("Seven");break;
case 8: printf("Eight");break;
case 9: printf("Nine");break;
}
printf(" "); rev=rev/10;
}while(rev!=0);
while(m!=0 && m%10==0)printf("Zero ",m=m/10);
getch();
}