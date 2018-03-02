#include<stdio.h>
int main()
{
int n,k,i,a[100];
printf("enter the n value");
scanf("%d",&n);
printf("enter the position to be print );
scanf("%d",&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]==k)
{
if((a[i]%2)!=0)
{
printf("%d",a[i]);
}
else
{
i=i+1;
printf("%d",a[i]);
}
}
}
}
