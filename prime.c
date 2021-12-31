#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=0;
    printf("enter a no. to check whether no. is prime or not\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is a prime no.",n);
    }
    else
    {
        printf("%d is not a prime no.");
    }
}