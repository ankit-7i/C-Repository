#include<stdio.h>
int main()
{
    goto a;
    c:
    puts("Graduation");goto last;
    b:
    puts("Intermediate");
    a:
    puts("10th");
    goto b;
    last:
    /* code */
    return 0;
}
