// Read cust id name quantity and rate of item find the amt 35% discount and total
#include<stdio.h>
main(){
    char id[20],name[20];
    float qty,price,amount,disc,tot;
    printf("Enter customer id: ");
    scanf("%s",id);
    printf("Enter customer name: ");
    scanf("%s",name);
    printf("Enter quantity: ");
    scanf("%f",&qty);
    printf("Enter price: ");
    scanf("%f",&price);
    amount=qty*price;
    disc=amount*0.35;
    tot=amount-disc;
    printf("Customer id: %s\n",id);
    printf("Customer name: %s\n",name);
    printf("Amount = %.2f\n",amount);
    printf("Discount =%.2f\n",disc);
    printf("Total =%.2f",tot);
}
