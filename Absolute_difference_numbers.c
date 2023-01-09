#include<stdio.h>
#include<math.h>
int main()
{ 
    int num,n,k,di,fi,la,x;
    scanf("%d%d",&num,&n);
    k=log10(num)-(n-1);
    di=pow(10,k);
    fi=num/di;
    x=pow(10,n);
    la=num%x;
    printf("%d",abs(fi-la));
}