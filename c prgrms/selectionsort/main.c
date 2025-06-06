/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[100];
    int i, j, size, min, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < size - 1; i++) {
        min= i;
        for(j = i + 1; j < size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        
        if(min!= i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }


    printf("Sorted array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
