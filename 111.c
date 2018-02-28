#include<stdio.h>
int main()
{
printf("enter the number");
int n,i,a;
scanf("%d",&n);
while(n>0)
{
a=n%10;
count=count+1;
n=n/10;
}
printf("the no of digit is %d",count);
}
