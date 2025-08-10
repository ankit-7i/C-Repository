// step no 
#include<stdio.h>
int main(){
    int n,r1,r2;
    printf("Enter the number of steps: ");
    scanf("%d",&n);
    for(r1=n%10,n=n/10;n!=0;n=n/10){
        r2 =n%10;
        if(r1-r2 ==1 || r1-r2 == 1){r1=r2;}
        else{
            puts("Not a step no");return;
        }
    }
    puts("Step no");
}