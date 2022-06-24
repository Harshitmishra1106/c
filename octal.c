#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c=0,i=0,k;
    printf("enter any no. to find its octal equivalent\n");
    scanf("%d",&n);
    k=n;
    while(n!=0){
        a=n%10;
        b=n-a;
        n=b/10;
        c=c+a*pow(2,i);
        i++;
    }
    printf("the octal equivalent no. of %d is %d",k,c);
    return 0;
}
