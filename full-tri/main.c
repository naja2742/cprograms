/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,size=5;
    for(i=0;i<=size;i++){
        for(j=i;j<=size-1;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf(" *");
    
        }
        printf("\n");
    }

    return 0;
}