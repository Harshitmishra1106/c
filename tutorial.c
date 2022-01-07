#include<stdio.h>
void main()
{
    int a,n,m;
    float b;
    printf("enter the total profit earned and selling price of 15 items");
    scanf("%d%d",&n,&m);
    a=m-n;
    b=a/15;
    printf("%f is the cost price of each item",b);
}