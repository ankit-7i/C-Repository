#include<stdio.h>
#include<conio.h>
void main()
{
int id, tel,eng,hin,mat,sci,soc,tot;
char name[30];
float avg;

printf("Enter stu id, name, 6 sub marks ");

scanf("%d%s%d%d%d%d%d%d",&id,name,&tel,&eng,&
hin,&mat,&sci,&soc);
tot=tel+eng+hin+mat+sci+soc;
avg=tot/6.0;
puts("Id\tName\tTot\tAvg\tGrade");

printf("%d\t%s\t%d\t%.2f\t",id,name,tot,avg);
if(tel>=35&&eng>=35&&hin>=35&&mat>=35&&sci>=35
&&soc>=35)
{
if(avg>=75)puts("Distiniction");
else if(avg>=60)puts("1st class");
else if(avg>=50)puts("2nd class");
else puts("3rd class");
}
else puts("Fail");
getch();

}