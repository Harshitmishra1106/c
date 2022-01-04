#include<stdio.h>
int fact(int);
void main()
{
    int n,factorial;
    printf("enter a no.");
    scanf("%d",&n);
    factorial=fact(n);
    printf("%d",factorial);

}
int fact(int m)
{
    if(m<=0)
    {
        printf("factorial not possible");
    }
    else if(m==1)
    {
        return 1;
    }
    else
    {
        return m*fact(m-1);
    }
}