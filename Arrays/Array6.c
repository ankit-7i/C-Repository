#include<stdio.h>
int main(){
    int stuid;
    char name[20];
    int sum=0;
    float avg;
    printf("Enter your student id: ");
    scanf("%d", &stuid);
    printf("Enter your name: ");
    scanf("%s", name);

    int submarks[6],i;
    printf("Enter 6 subj marks:\n ");
    for(i=0;i<6;i++)scanf("%d",&submarks[i]);
    printf("Subj marks are: \n");
    for(i=0;i<6;i++)printf("%4d",submarks[i]);

    // sum
      for (int i = 0; i < 6; i++) {
        sum += submarks[i];
    }
    printf("Total marks: %d\n", sum);

      avg = (float)sum /6;
      printf("Average marks: %.2f\n", avg);

      if (avg>60){
        printf("Pass");
      }
        else 
        printf("Fail");
      
}