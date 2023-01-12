#include<stdio.h>
int main()
{
    long int n;
    int b,k=0;
    scanf("%ld",&n);
    for(n;n>0;n=n/10)
    {
        k++;
    }
    if(k==10)
    printf("Valid");
    else 
    printf("Invalid");
}