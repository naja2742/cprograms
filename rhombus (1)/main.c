/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n,size=5;
    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            printf(" ");
            
        }
        for(n=0;n<=size;n++){
            printf("*");
        }   
            
        printf("\n");

    }
    

    return 0;
}
