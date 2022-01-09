#include<stdio.h>
void main()
{
    int i=0,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do
    {
    printf("%d\n",i+1);
    i=i+1;
    }
     while(i<n);
    
}