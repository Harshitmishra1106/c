/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int t,n,k,a[100],i;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(k-a[i]>=0){
                k=k-a[i];
                printf("1");
            }
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}