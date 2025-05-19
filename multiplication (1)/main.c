/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
        printf("%d * %d = %d\n",a,i,i*a);
    }


    return 0;
}