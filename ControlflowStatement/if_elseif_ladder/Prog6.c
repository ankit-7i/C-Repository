#include<stdio.h>
main(){
    int monthnum;
    scanf("%d",&monthnum);

    if ( monthnum == 1 || monthnum == 3 || monthnum == 5 || monthnum ==7 || monthnum  == 8 || monthnum == 10 || monthnum == 12){
        printf("Number of days: 31");
    }
    else if( monthnum == 4 || monthnum == 6 || monthnum == 9 || monthnum == 11 ){
        printf("Number of days: 30");
    }
    else if ( monthnum == 2)
    {
        printf("Number of days: 28");
    }
    else {
        printf("Invalid month number. Please enter between 1 and 12.");
    }
}