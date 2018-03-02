

#include<stdio.h>
int main()
{
int n,k,i,a[100];
printf("enter the n value");
scanf("%d",&n);
printf("enter the position to be print ");
scanf("%d",&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i==k)
{

printf("%d",a[i]);
}
}
}
