#include<stdio.h>
int fact(int a)
{
    int b=1,i;
    for(i=a;i>0;i--)
    {
        b*=i;
    } 
    //printf("%d ",b);
    return b;
}
int main()
{
    int n,i,sum=0,l,c;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        c=i%10;
        l=fact(c);
        // printf("%d ",l);
        sum+=l;
    } 
    //printf("%d %d ",sum,n);
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    printf("The number %d is not a strong number",n);
}