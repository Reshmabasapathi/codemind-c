#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int a[3];
    float c,tc;
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%.0fKB",tc);
    
}