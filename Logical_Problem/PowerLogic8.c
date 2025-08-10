#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
    int a,b;
    printf("Enter base, power values");
    scanf (" %d %d",&a,&b);
    printf("%d ^ %d = %f\n",a,b,pow(a,b));
    printf("%d ^ %d = %.0f\n",a,b,pow(a,b));
    printf("%d ^ %d = %d\n",a,b,pow(a,b));
    getch();

}