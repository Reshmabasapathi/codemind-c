#include<stdio.h>
int main()
{
    int a,b,sum=0,pro=1,i,re;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        sum+=b;
        pro*=b;
    }
    re=pro-sum;
    printf("%d",re);
}