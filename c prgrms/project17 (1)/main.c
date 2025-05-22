/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",i,a,i*a);
    }

    return 0;
}
