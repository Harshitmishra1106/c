#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b,c;
    printf("enter two no's");
    scanf("%d %d",&a,&b);
    c=hcf(a,b);
    printf("%d",c);
}

int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else{
        return n1;
    }
}