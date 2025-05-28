/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void sum(int,int);

void main() {

    int a,b,result;
    printf("calculate sum of two numbers:");
    printf("\n enter two numbers:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    
}
    
    void sum(int a,int b)
{
    
    printf("\n the sum is %d",a+b);
    

}

