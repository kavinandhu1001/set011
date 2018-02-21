#include<stdio.h>
void main()
{
int i,n,m,t=1;
printf("enter the two values");
scanf("%d",&n);
scanf("%d",&m);
for(i=1;i<=m;i++)
{
t=t*m;
}
printf("%d",t);
}
