// Armstrong
 #include<stdio.h>
 #include<math.h>
 int main(){
    int n,m,r,c=0,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(m=n;m!=0;m/=10) c++;
    for(m=n;m!=0;m/=10) s+=pow(m%10,c);
    puts(n==s?"Armstrong no":"Not an armstrong no");
 }
