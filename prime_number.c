#include<stdio.h>
int main()
{
    int a,i,b,n,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        count++;
    } 
    if(count==2)
    printf("prime");
    else
    printf("not a prime");
}