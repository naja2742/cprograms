/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }


    return 0;
}
