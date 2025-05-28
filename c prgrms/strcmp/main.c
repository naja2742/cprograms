/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10]="hello";
    char s2[10]="hello";
    strcmp(s1,s2);
    if(strcmp(s1,s2)==0){
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }

    return 0;
}
