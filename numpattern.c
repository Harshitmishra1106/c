#include<stdio.h>
void main()
{
    int n,i,j,count=1;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}