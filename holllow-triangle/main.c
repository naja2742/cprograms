/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,size=5;
    for(i=0;i<size;i++){
        for(j=0;j<2*(size-i);j++){
            printf(" ");
        }
        for(k=0;k<=2*i+1;k++){
            if(k==0||k==2*i||k==size-1)
            printf(" *");
        }else{
            printf(" ");
        }
    }

    return 0;
}
