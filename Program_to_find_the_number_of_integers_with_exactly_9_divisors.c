#include<stdio.h>
int main()
{
    int n,count,i,j,b,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            b=i%j;
            if(b==0)
            count++;
        }
        if(count==9)
        {
            printf("%d ",i);
            k++;
        }
    }
    printf("
Total=%d",k);
}