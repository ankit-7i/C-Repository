#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
    start:
    textbackground(random(16));
    textcolor(random(16));
    cprintf("Ankit");
    goto start;
}