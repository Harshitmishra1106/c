#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the no. of rows\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}