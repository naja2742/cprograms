/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    if(a>=18)
    {
        
        printf("given age is eligible to vote");
    }
    else
    {
        printf("given age is not eligible to vote");
    }

    return 0;
}