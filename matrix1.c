#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j,k,c[3][3];
    printf("enter the elements of both matrices\n to be multiplied:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            scanf("%d",&b[j][k]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            c[i][j]=c[i][j]+a[i][j]*b[j][k];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    } 
}