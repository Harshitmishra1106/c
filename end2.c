#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the no. of rows you want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}