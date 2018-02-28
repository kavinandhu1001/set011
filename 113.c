


#include<stdio.h>
int main()
{
int n,i,k,count=0,a[10];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
if(a[i]==k)
{
++count;

}}
    printf("%d",count);
    return 0;

}
