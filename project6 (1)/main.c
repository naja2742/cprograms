/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    printf("enter two points:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("first quadrant");
    }else if(x<0&&y>0)
    {
        printf("second quadrant");
    }
    else if(x<0&&y<0)
    {
        printf("third quadrant");
    }
    else
    {
        printf("fourth quadrant");
    }

    return 0;
}
