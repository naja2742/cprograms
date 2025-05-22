/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, rows=5;

    for (i = 1; i <= rows; i++) {
    
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = rows; i >= 1; i--) {
        
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}