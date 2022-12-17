#include<stdio.h>
int main()
{
    int l,b,w,c,ai,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ai=l*b;
    int ao,al;
    ao=((2*w+l)*(2*w+b));
    al=ao-ai;
    tc=c*al;
    printf("%d",tc);
}