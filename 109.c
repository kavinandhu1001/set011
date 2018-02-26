#include<stdio.h>
int main()
{
int a[100],i,temp,n;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp>a[i])
{
temp=a[i];
}
}
printf("the minimum is %d",temp);
}
