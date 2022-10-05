#include<stdio.h>
void main()
{
    int n,a,b,c;
    printf("enter a four digit no.");
    scanf("%d",&n);
    a=n%10;
    b=n/1000;
    c=a+b;
    printf("%d is the sum of the first and the last digit of %d",c,n);
}

