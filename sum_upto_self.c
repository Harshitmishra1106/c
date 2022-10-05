#include<stdio.h>
void main()
{
    int n,i,j=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j+i;
    }
    printf("%d is the sum",j);
}
