#include<conio.h>
#include<string.h>
void main()
{
int qty, amt=0, op; char items[200]="";
menu:

puts("*****************************************************************");
puts("\t\t\t HOTEL SAI BALAJI");
puts("\t\t\t AMEERPET-HYDERABAD");
puts("*****************************************************************");
puts("\t\t 1. Tea - 10/-");
puts("\t\t 2. Coffee/Milk/Boost/Water Bottle -20/-");

puts("\t\t 3. Idly / Poha / Upma / Plain dosa - 30/-");
puts("\t\t 4. Sambar Idly / wada / Onion dosa /poori - 40/-");
puts("\t\t 5. Paneer dosa / Veg biryani - 50/-");
puts("\t\t 6. Bill");
puts("\t\t 7. Cancel");
puts("\t\t 8. Close");

printf("\t\t Enter Ur option []\b\b");scanf("%d",&op);
if(op>=1&&op<=5){printf("Enter Quanity");scanf("%d",&qty);}
switch(op)
{

case 1: amt+=qty*10; strcat(items,"Tea-10\n");
break;

case 2: amt+=qty*20;strcat(items,"Coffee-20\n");break;

case 3: amt+=qty*30; strcat(items,"Idly-30\n");break;

case 4: amt+=qty*40;strcat(items,"Onion Dosa-40\n");break;

case 5: amt+=qty*50;strcat(items,"veg biryani-40\n");break;

case 6:
printf("%s\nTotal:%d",items,amt);getch();strcpy(items,"");amt=0;break;
case 7: printf("Ur ordercancelled");getch();amt=0;strcpy(items,"");break;
case 8: return;
default: puts("Invalid selection");getch();

}
goto menu;
}