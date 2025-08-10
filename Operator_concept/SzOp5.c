#include<stdio.h>
main(){
	printf("%d\n",sizeof("1.234"));
	printf("%d\n",sizeof(10+1.2));
	printf("%d\n",sizeof(10,1.2));
	printf("%d\n",sizeof(1.2,10));
	printf("%d\n",sizeof(sizeof("ANKIT")));
	printf("%d\n",sizeof("ANKIT+1"));
	printf("%d\n",sizeof("ANKIT")+1);

}
