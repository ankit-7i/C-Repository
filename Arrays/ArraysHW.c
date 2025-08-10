#include<stdio.h>
#include<conio.h>
main()
{
char id[30], name[20];
int sub[6],tot=0,p=1,i;
float avg;

printf("Enter stu id");gets(id);
printf("Enter stu name "); gets(name);
printf("Enter 6 sub marks ");
for(i=0;i<6;i++)
{scanf("%d",&sub[i]);tot+=sub[i];if(sub[i]<35)p=0;}
avg=tot/6.0;

printf("%s id=%s, tot=%d, avg=%.2f and got %s",name,id,tot,avg,p?"Passed":"Failed");
getch();
}