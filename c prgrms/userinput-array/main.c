/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Even elements: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    
    printf("\nOdd elements: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
