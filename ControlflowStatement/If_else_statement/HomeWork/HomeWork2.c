#include<stdio.h>
main(){
    float sales;
    printf("Enter your sales: ");
    scanf("%f", &sales);
    float basic_sal = 10000;
    float da = basic_sal * 0.945;
    float commission = sales * 0.10;
    float commission2 = sales * 0.05;
    float bonus = 10000;
    float bonus2=2000;
    
    if (sales >= 100000){
        printf("your basic salary is : %.2f\n", basic_sal);
        printf("Your DA is : %.2f\n", da);
        printf("Your Bonus is : %.f\n",bonus);
        printf("Your Commison is:500 %.2f\n",commission);
        printf("Your Gross salary is : %.2f\n",basic_sal+da+bonus+commission);

    }
    else{
        printf("your basic salary is : %.2f\n", basic_sal);
        printf("Your DA is : %.2f\n", da);
        printf("Your Bonus is : %.2f\n",bonus2);
        printf("Your Commison is %.2f\n",commission2);
        printf("Your Gross salary is : %.2f",basic_sal+da+bonus2+commission2);

    } 

}