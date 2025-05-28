/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int k);

int main() {
    int result = factorial(5);
    printf("%d", result);  
    return 0;
}

int factorial(int k) {
    if (k > 1) {
        return k * factorial(k - 1);
    } else {
        return 1;
    }
}