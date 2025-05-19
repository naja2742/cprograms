/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,b=1,i,limit=10,fib;
    printf("%d %d", a,b);
    for(i=1;i<limit;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    
    
    printf(" %d ", fib);
    }

    return 0;
}
