#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c;
    printf("enter a no. for its table\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        c=i*n;
        printf("%d*%d=%d\n",n,i,c);
    }
}
