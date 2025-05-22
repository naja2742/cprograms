/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,p,c;
    printf("enter marks in 3 subjects:");
    scanf("%d%d%d",&m,&p,&c);
    if(m+p+c>=190||m+p>=140)
    {
        printf("student is eligible");
    }
    else
    {
        printf("student is not eligible");
    }
    
    return 0;
}
