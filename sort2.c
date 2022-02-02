#include<stdio.h>
void main()
{
    int a[50],n,i,j,t;
    printf("enter the no. of terms to entered by you.\n but remember not exceed 49 terms\n");
    scanf("%d",&n);
    printf("now enter the no's to be entered for sorting them\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}