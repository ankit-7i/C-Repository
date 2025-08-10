#include<stdio.h>
main(){
    int a[100],n,i,max,min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(max=min=a[0],i=1;i<n;i++){
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",min);
}