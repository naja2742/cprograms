/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void greatest(int num1,int num2,int num3){
    if(num1>num2&&num1>num3){
        printf("greatest number is %d",num1);
    }else if(num2>num3){
        printf("greatest number is :%d",num2);
    }else{
        printf("greatest number is:%d",num3);
    }
    
    
    
}
int main()
{
    greatest(3,4,1);

    return 0;
}
