#include <stdio.h>
void main()
{
    int a[25],n,i,j,k,position;
    printf("enter the no. of no's you want to be sorted\n");
    scanf("%d",&n);
    printf("now enter the no's you want to be sorted\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<(n-1);j++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[position])
            {
               position=j; 
            }
            if(position!=i)
            {
                k=a[i];
                a[i]=a[position];
                a[position]=k;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}