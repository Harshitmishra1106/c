#include<stdio.h>
// you haven't done it by your own remember it.
int fibonacci(int n);
void main()
{
    int n,i;
    printf("enter the no. of terms of fibonacci series\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}