#include<stdio.h>
void main()
{
    int i,j,c=0;
    for(i=1;i<=300;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d\t",i);
        }
        c=0;
    }
}