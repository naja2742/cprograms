/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int side1,side2,side3;
    printf("enter three sides:\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2&&side2==side3){
        printf("equiletral triangle");
    }else if(side1==side2||side1==side3||side2==side3){
        printf("isosceles triangle");
    }else{
        printf("scalene triangle");
    }

    return 0;
}
