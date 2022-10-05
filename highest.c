#include<stdio.h>
void main()
{
    int a,b,greatest;
    printf("enter two no's to find greatest of them\n");
    scanf("%d %d",&a,&b);
    greatest=(a>b)?a:b;
    printf("%d is the greatest no.",greatest);
}
