#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,c;
    printf("enter a number to get its reverse\t");
    scanf("%d",&n);
    while(n!=0)
   { 
    a=n%10;
    b=(n-a);
    c=b/10;
    n=c;
    printf("%d",a);
   }
}