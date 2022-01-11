#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the no. of rows you want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=j;k++)
           { printf("%d",i);
           }
        }
        printf("\n");
    }
}