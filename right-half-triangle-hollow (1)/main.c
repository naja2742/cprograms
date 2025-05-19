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
        for(j=i;j<=size-1;j++){
            printf(" ");
        }
        for(n=0;n<=i;n++){
             if(i==0 ||i==size||n==1||n==size){
                printf(" *");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}
