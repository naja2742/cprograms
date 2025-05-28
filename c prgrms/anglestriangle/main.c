/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int angle1,angle2,angle3,sum;
    printf("enter the the value of angle1:");
    scanf("%d",&angle1);
    printf("enter the value of angle2:");
    scanf("%d",&angle2);
    printf("enter the value of angle3:");
    scanf("%d",&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180){
        printf("the angles can form a triangle");
    }else{
        printf("the angles cannot form a triangle");
    }
    return 0;
}
