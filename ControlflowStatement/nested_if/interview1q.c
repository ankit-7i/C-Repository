#include<stdio.h>
main(){
    printf("%d\n",1?2?3:4:0);
    printf("%d\n",0?2?3:4:1);
    printf("%d\n",2?0?3:4:1);
}