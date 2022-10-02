#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],i;
    int b;
    printf("enter a string\n");
    scanf("%[^\n]s",a);
    b= strlen(a);
    printf("length of given string:\n%d",b);
    return 0;
}