#include<stdio.h>
void main()
{
    int n,i,j,k=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<2*n;j++)
        {
            if(n-j<i&&n-j>0)
            {
                printf("%d",k);
                k++;
            }
            else if(j-n==0)
            {
                printf("%d",k);
            }
            else if(j-n<i&&j-n>0)
            {
                k--;
                printf("%d",k);
                
            }
            else{
                printf(" ");
            }
        }
        k=1;
        printf("\n");
    }
}