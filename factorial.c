#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("i/p a no. to get its factorial\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d is the factorial of %d",f,n);
    }
    else if(n<0)
    {
        exit(1);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d is the factorial of %d",f,n);
    }
}