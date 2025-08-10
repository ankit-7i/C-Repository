// Selection sort in ascending order
#include<stdio.h>
main(){
    int a[100],n,i,j,t;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter %d elements in array:\n",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("Sorted elements:");
        for(i=0;i<n;i++)printf("%4d",a[i]);
    }
}