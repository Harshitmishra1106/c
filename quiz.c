#include<stdio.h>
#include<math.h>
long int convert(int);
void main()
{
    int n,bin;
    printf("enter a decimal no.\n");
    scanf("%d",&n);
    bin=convert(n);
    printf("%d in decimal=%ld in binary",n,bin);
}
long convert(int n)
{
    long bin=0;
    int rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    return bin;
}