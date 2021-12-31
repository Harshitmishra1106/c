#include<stdio.h>
void main()
{
    int n,i,se=0,so=0;
    printf("enter the no. of first n natural numbers\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            se=se+i;
        }
        else
        {
            so=so+i;
        }
    }
    printf("%d is the sum of even no's\n %d is the sum of odd no's",se,so);
}