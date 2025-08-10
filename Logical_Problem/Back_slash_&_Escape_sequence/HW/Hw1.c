// Read stu id name 6 sub marks andf find total avg pass or fail using ternary operator

#include<stdio.h>
main(){
    int id,odia,eng,sans,mat,sci,soc,tot;
    char name[20];
    float avg;
    printf("Enter student id: ");
    scanf("%d",&id);
    printf("Enter student name: ");
    scanf("%s",&name);
    printf("Enter odia marks: ");
    scanf("%d",&odia);
    printf("Enter english marks: ");
    scanf("%d",&eng);
    printf("Enter sanskrit marks: ");
    scanf("%d",&sans);
    printf("Enter maths marks: ");
    scanf("%d",&mat);
    printf("Enter science marks: ");
    scanf("%d",&sci);
    printf("Enter social marks: ");
    scanf("%d",&soc);
    tot=odia+eng+sans+mat+sci+soc;
    avg=(float)tot/6;
    puts("id\tName\tTotal\tAvg\tPass/Fail");
    puts("------------------------------------");
    printf("%d\t%s\t%d\t%.2f\t%d\n",id,name,tot,avg);
    puts(odia>=35&&eng>=35&&sans>=35&&mat>=35&&sci>=35&&soc>=35 ?"Pass":"Fail");
}