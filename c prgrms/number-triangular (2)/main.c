/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j, size=4;
    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
            printf("%d", i);
        }
            printf("\n");

    }

    return 0;
}