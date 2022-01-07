#include<stdio.h>
void main()
{
    int n,a,b;
    float c;
    printf("enter the two no's to be operated\n");
    scanf("%d%d",&a,&b);
    printf("press 1 to add\n press 2 to subtract\n press 3 to multiply\n press 4 to divide\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    c=a+b;
        printf("%d+%d=%f",a,b,c);
        break;
    case 2:
    c=a-b;    
    printf("%d-%d=%f",a,b,c);
    break;
    case 3:
    c=a*b;
    printf("%d*%d=%f",a,b,c);
    break;
    case 4:
    c=a/b;
    printf("%d/%d=%f",a,b,c);
    break;
    default:
    printf("abe dhang se instructions to padh liya kr");
        break;
    }
}