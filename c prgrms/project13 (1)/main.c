/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dn;
    printf("enter a number:");
    scanf("%d",&dn);
    if(dn==1)
    {
        printf("monday");
    }else if(dn==2)
    {
        printf("tuesday");
    }else if(dn==3)
    {
        printf("wednesday");
    }else if(dn==4)
    {
        printf("thursday");
        
    }else if(dn==5)
    {
        printf("friday");
    }else if(dn==6)
    {
        printf("saturday");
    }else if(dn==7)
    {
        printf("sunday");
    }
     else
     {
         printf("\n invalid day no");
     }
    return 0;
}