#include<stdio.h>
void main()
{
    int a[100],n,i,j,k;
    printf("enter the no. of elements of array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("elements after dismiss of duplicate\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}