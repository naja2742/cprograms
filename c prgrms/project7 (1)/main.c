/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a year:");
    scanf("%d",&a);
    if(a%4==0&&a%100!=0||a%400==0)
    {
        printf("is leap year");
    }
    else
    {
        printf("is not leap year");
    }

    return 0;
}
