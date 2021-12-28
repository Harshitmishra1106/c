#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,c;
    printf("enter a two digit number\t");
    scanf("%d",&n);
    a=n%10;
    b=(n-a);
    c=b/10;
    printf("%d%d is the reverse of the provided no.",a,c);    
}