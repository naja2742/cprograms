/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int myage=43;
    int* ptr=&myage;
    printf("%d\n",myage);
    printf("%p",&myage);

    return 0;
}