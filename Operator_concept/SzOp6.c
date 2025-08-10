#include<stdio.h>
main(){
	int a = 999;
	printf("%d\n",sizeof(++a));
	printf("a=%d\n",a);
	printf("%d\n",sizeof(a=5000));
	printf("a=%d\n",a);
	printf("%d\n",sizeof(printf("Ankit")));
	printf("%d,%d",printf("Ankit"),sizeof("Ankit"));
	
}

// In side sizeof() expression not considerd i.e sizeof only returns the no of bytes
