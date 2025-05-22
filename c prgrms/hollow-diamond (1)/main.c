/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i, j, k;
    int size = 4;

    // Upper half of the hollow diamond
    for(i = 1; i <= size; i++) {
        // Print leading spaces
        for(j = i; j < size; j++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for(k = 1; k <= (2 * i - 1); k++) {
            if(k == 1 || k == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half of the hollow diamond
    for(i = size - 1; i >= 1; i--) {
        // Print leading spaces
        for(j = size; j > i; j--) {
            printf(" ");
        }

        // Print stars and inner spaces
        for(k = 1; k <= (2 * i - 1); k++) {
            if(k == 1 || k == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}