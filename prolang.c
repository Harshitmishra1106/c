/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int t,a,b,a1,b1,a2,b2;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d%d%d",&a,&b,&a1,&b1,&a2,&b2);
	    if(a==b1&&b==a1) printf("1\n");
	    else if(a==a1&&b==b1) printf("1\n");
	    else if(a==b2&&b==a2) printf("2\n");
	    else if(a==a2&&b==b2) printf("2\n");
	    else printf("0\n");
	}
	return 0;
}