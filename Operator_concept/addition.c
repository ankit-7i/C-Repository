/*In Assembly lang (low level lang )
#include<stdio.h>
void main(){
    int a = 10 , b= 20,c ;
    asm {
        mov ax,a
        mov bx,b
        add ax,bx
        mov c,ax
    }
    printf("c= %d",c);
}
*/
// High level 
#include<stdio.h>
void main(){
    int a = 10 , b= 20,c = a+b;
    printf("c = %d",c);
}