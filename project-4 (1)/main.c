/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,n;
    printf("enter value of m:");
    scanf("%d",&m);
    if(m>0)
    {
        n=1;
    }else if(m<0)
    {
        n=-1;
    }
    else
    {
        n=0;
    }
    
    printf("n is %d",n);

    return 0;
}
