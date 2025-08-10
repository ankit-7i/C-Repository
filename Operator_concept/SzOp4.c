#include<stdio.h>
main(){
	char s1[10]="BBSR",s2[]="BBSR";
	printf("%d\n",sizeof(s1));
	printf("%d\n",sizeof(s2));
}
// sizeof() counts null char too
