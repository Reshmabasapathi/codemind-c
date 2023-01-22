#include<stdio.h>
int main()
{
    int n,j,s=0,b,pro=1;
    scanf("%d",&n);
    for(j=n;j>0;j=j/10)
    {
        b=j%10;
        s+=b;
        pro*=b;
    }
    if(s==pro)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}