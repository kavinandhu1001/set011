

#include<stdio.h>
int main()
{
int n,i,k,flag=0;
scanf("%d",&n);
scanf("%d",&k);

for(i=0;i<n;i++)
{
if(i==k)
{
printf("yes");
flag=1;
break;
}}
if(flag==0)
{
    printf("no");
}

}
