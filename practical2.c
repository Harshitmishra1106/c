#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,i,y=0,j,f=1,z=1;
    printf("enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        y=z+pow(-1*x,i)/f;
        z=y;
        f=1;
    }
    printf("%d",y);
}//series:1-x/1!+x2/2!-x3/3!+......upto n terms